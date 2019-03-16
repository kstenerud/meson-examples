Meson Build File Examples
=========================

[Meson](http://mesonbuild.com), like many projects, has documentation that is heavy on the detail, but weak on the big picture. There are no best practices offered, and questions like "How do I..." require a lot of digging around in the guts.

The opinionated examples in this repository are designed as fully functional "jump start" projects to get you going:

* Building a library
* Building a header-only library
* Building an executable
* Setting up dependencies to other projects
* Testing via google test


### Common Features

* Project files are split such that they have a "simple config" section at the top for the most common things you'll want to modify.
* Projects are structured in an opinionated way.
* Public APIs are marked public or private (depending on their internal or external use) via `-DMYPROJECT_PUBLIC` defines, which handle windows and unix style visibility specifications.
* The project name and version are passed to the compiler as `-DPROJECT_NAME` and  `-DPROJECT_VERSION`
* Project files are already set up to be used as dependencies of other projects, and as packages.
* The library projects come with example tests.


### Building

Requirements:

  * Meson 0.49 or newer
  * Ninja 1.8.2 or newer
  * A C compiler
  * A C++ compiler

#### To build from command line, go into one of the project directories, then:

To initialize the builder:

    meson build

To build the project from then on:

    ninja -C build

To run the tests:

    ninja -C build test

To run the tests with full "google test" reporting:

    ./build/run_tests

All build files will be put in the `build` subdir, which is included in `.gitignore`.


### Ideas?

If you have other ideas for making these projects more robust as starting points, please open an issue to discuss it!
