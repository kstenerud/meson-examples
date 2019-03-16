# Header-only library project.
#
# The main difference between this and a regular library project is that
# there's no "link_with" parameter in project_dep (because there are no
# sources to compile, thus no library to link with).
#
# All of the commonly modified parts are above the line. Generally, you
# shouldn't need to modify anything below the line until your project becomes
# fairly complex.


project(
  'headeronly',
  'c',
  version : '2.0.0',
  default_options : ['warning_level=3']
)
project_description = 'An example header-only library'

project_headers = [
  'include/headeronly.h'
]

project_test_files = [
  'tests/src/tests.cpp',
]

build_args = [
]


# ===================================================================

# ======
# Target
# ======

public_headers = include_directories('include')

project_target = shared_library(
  meson.project_name(),
  [],
  install : true,
  c_args : build_args,
  gnu_symbol_visibility : 'hidden',
  include_directories : public_headers,
)


# =======
# Project
# =======

# Make this library usable as a Meson subproject.
project_dep = declare_dependency(
  include_directories: public_headers
)
set_variable(meson.project_name() + '_dep', project_dep)

# Make this library usable from the system's
# package manager.
install_headers(project_headers, subdir : meson.project_name())

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name : meson.project_name(),
  filebase : meson.project_name(),
  description : project_description,
  subdirs : meson.project_name(),
)


# ==========
# Unit Tests
# ==========

if not meson.is_subproject()
  add_languages('cpp')
  subdir('tests')

  test('all_tests',
    executable(
      'run_tests',
      files(project_test_files),
      dependencies : [project_dep, test_dep],
      install : false
    )
  )
endif
