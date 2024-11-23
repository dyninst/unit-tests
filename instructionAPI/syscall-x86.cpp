#include "InstructionDecoder.h"
#include "instructionAPI/h/syscalls.h"

#include <iostream>
#include <array>

namespace di = Dyninst::InstructionAPI;

constexpr auto num_tests = 15;
constexpr auto num_bytes = 63UL;
std::array<const unsigned char, num_bytes> buffer = {
  0xe8, 0x10, 0x00, 0x00, 0x00,                     // (1)  call 0x10 + rip
  0x64, 0xff, 0x14, 0x25, 0x10, 0x00, 0x00, 0x00,   // (2)  call  [q|d]word ptr fs:[0x10]
  0x64, 0xff, 0x15, 0x10, 0x00, 0x00, 0x00,         // (3)  32-bit 'call dword ptr fs:0x10', 64-bit 'call qword ptr fs:[rip + 0x10]'
  0xff, 0x14, 0x25, 0x10, 0x00, 0x00, 0x00,         // (4)  call  [q|d]word ptr [0x10]
  0xff, 0x15, 0x10, 0x00, 0x00, 0x00,               // (5)  32-bit 'call dword ptr 0x10', 64-bit 'call qword ptr [rip + 0x10]'
  0x65, 0xff, 0x14, 0x25, 0x10, 0x00, 0x00, 0x00,   // (6)  call  [q|d]word ptr gs:[0x10]
  0x65, 0xff, 0x15, 0x10, 0x00, 0x00, 0x00,         // (7)  32-bit 'call dword ptr gs:0x10', 64-bit 'call qword ptr gs:[rip + 0x10]'
  0x65, 0xff, 0x50, 0x10,                           // (8)  call gs:[rax + 0x10]
  0xcd, 0x80,                                       // (9)  int 0x80
  0xcc,                                             // (10) int3
  0xce,                                             // (11) into
  0xf1,                                             // (12) int1
  0x0f, 0x05,                                       // (13) syscall
  0x0f, 0x34,                                       // (14) sysenter
  0xcd, 0x0a,                                       // (15) int 0x0a
};

bool run_32() {
  std::array<bool, num_tests> answers = {
    false,    // (1)
    false,    // (2)
    false,    // (3)
    false,    // (4)
    false,    // (5)
    true,     // (6)
    true,     // (7)
    false,    // (8)
    true,     // (9)
    false,    // (10)
    false,    // (11)
    false,    // (12)
    true,     // (13)
    false,    // (14)
    true,     // (15)
  };

  di::InstructionDecoder decoder(buffer.data(), buffer.size(), Dyninst::Arch_x86);
  int test_num = 0;
  di::Instruction i;

  do {
    i = decoder.decode();
    if(i.isValid()) {
      if(answers[test_num] != di::isSystemCall(i)) {
        std::cerr << "Test " << (test_num+1) << " failed\n";
        return false;
      }
    }
    test_num++;
  } while(i.isValid());

  return true;
}

bool run_64()  {
  std::array<bool, num_tests> answers = {
    false,    // (1)
    false,    // (2)
    false,    // (3)
    false,    // (4)
    false,    // (5)
    false,    // (6)
    false,    // (7)
    false,    // (8)
    true,     // (9)
    false,    // (10)
    false,    // (11)
    false,    // (12)
    true,     // (13)
    false,    // (14)
    true,     // (15)
  };

  di::InstructionDecoder decoder(buffer.data(), buffer.size(), Dyninst::Arch_x86_64);
  int test_num = 0;
  di::Instruction i;

  do {
    i = decoder.decode();
    if(i.isValid()) {
      if(answers[test_num] != di::isSystemCall(i)) {
        std::cerr << "Test " << (test_num+1) << " failed\n";
        return false;
      }
    }
    test_num++;
  } while(i.isValid());

  return true;
}


int main(int argc, char **argv) {
  if(argc != 2) {
    std::cerr << "Usage: " << argv[0] << " [32|64]\n";
    return -1;
  }

  // Convention for CTest
  constexpr int PASS =  0;
  constexpr int FAIL = -1;

  std::string type{argv[1]};

  if(type == "32") {
    std::cout << "Running in 32-bit mode\n";
    return run_32() ? PASS : FAIL;
  }
  if(type == "64") {
    std::cout << "Running in 64-bit mode\n";
    return run_64() ? PASS : FAIL;
  }

  std::cerr << "Unknown type\n" << "Usage: " << argv[0] << " [32|64]\n";
  return -1;
}
