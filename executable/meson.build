# Basic executable project.
#
# This project also uses the other two libraries as dependencies,
# as seen in "project_dependencies". I'm using symlinks for the subprojects,
# but ideally they should be subdirs of the subprojects dir, added via git
# submodule.
#
# All of the commonly modified parts are above the line. Generally, you
# shouldn't need to modify anything below the line until your project becomes
# fairly complex.


project(
  'myexec',
  'c',
  version : '1.1.0',
  default_options : ['warning_level=3']
)

project_source_files = [
  'src/myexec.c'
]

project_dependencies = [
  dependency('mylib', fallback : ['mylib', 'mylib_dep']),
  dependency('headeronly', fallback : ['headeronly', 'headeronly_dep']),
]

build_args = [
]


# ===================================================================

# ======
# Target
# ======

build_args += [
  '-DPROJECT_NAME=' + meson.project_name(),
  '-DPROJECT_VERSION=' + meson.project_version(),
]

project_target = executable(
  meson.project_name(),
  project_source_files,
  dependencies: project_dependencies,
  install : true,
  c_args : build_args,
)

test('basic', project_target)
