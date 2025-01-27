# Dyninst Unit Tests

These are small, fast tests that can be run while developing Dyninst.
Developers are strongly encouraged to add as many tests here as possible.

These are distinct from the [testsuite](https://github.com/dyninst/testsuite)
and the [external tests](https://github.com/dyninst/external-tests)
because unit tests need access to non-public headers. Moreover, a build
of Dyninst with all symbols exposed is required in order to call those
internal functions.

## Building

Build a version of Dyninst that has all symbols exposed.

```console
$ cmake /path/to/Dyninst -DDYNINST_ENABLE_TESTS=1 -DCMAKE_INSTALL_PREFIX=/path/to/Dyninst/install
```

The unit tests need both the installed version of Dyninst and its source tree.

```console
$ cmake /path/to/unit-tests -DDyninst_DIR=/path/to/Dyninst/install/lib/cmake/Dyninst -DDYNINST_SOURCE_TREE=/path/to/Dyninst
```

The tests can then be run with `ctest`.
