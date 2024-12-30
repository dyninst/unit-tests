#include "InstructionDecoder.h"
#include "Architecture.h"

#include <array>
#include <map>

#include "InstructionDecoder.h"
#include "Architecture.h"

#include <array>
#include <map>

int main() {
  std::array<const unsigned char, 2> opcode = {
    0x0f, 0x24
  };

  auto names = std::map<Dyninst::Architecture, char const*> {

    // x86 incorrectly decodes this as 'mov %tr0,(%eax)'. tr0 isn't a valid register.
//    { Dyninst::Arch_x86, "x86" },
//    { Dyninst::Arch_x86_64, "x86_64" },

    // ppc64 doesn't check the input size, so reads off the end of the array
//    { Dyninst::Arch_ppc64, "ppc64" },

    // aarch64 doesn't check the input size, so reads off the end of the array
//    { Dyninst::Arch_aarch64, "aarch64" }
  };

  for(auto [arch, name] : names) {
    Dyninst::InstructionAPI::InstructionDecoder dec(opcode.data(), opcode.size(), arch);
    auto insn = dec.decode();

    if(insn.isLegalInsn() != insn.isValid()) {
      std::cerr << name << ": mismatched result for 'isLegalInsn' and 'isValid'\n";
      return EXIT_FAILURE;
    }

    if(insn.isValid()) {
      std::cerr << name << " decoded an invalid instruction as '" << insn.format() << "'\n";
      return EXIT_FAILURE;
    }
  }
}
