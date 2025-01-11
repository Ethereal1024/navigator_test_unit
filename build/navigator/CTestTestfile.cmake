# CMake generated Testfile for 
# Source directory: /home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator
# Build directory: /home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/cppcheck.xunit.xml" "--package-name" "navigator" "--output-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/jazzy/bin/ament_cppcheck" "--xunit-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/cppcheck.xunit.xml" "--include_dirs" "/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/jazzy/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/jazzy/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/jazzy/share/ament_cmake_auto/cmake/ament_auto_package.cmake;110;ament_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;52;ament_auto_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/cpplint.xunit.xml" "--package-name" "navigator" "--output-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/ament_cpplint/cpplint.txt" "--command" "/opt/ros/jazzy/bin/ament_cpplint" "--xunit-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;78;ament_add_test;/opt/ros/jazzy/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;39;ament_cpplint;/opt/ros/jazzy/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/jazzy/share/ament_cmake_auto/cmake/ament_auto_package.cmake;110;ament_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;52;ament_auto_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/flake8.xunit.xml" "--package-name" "navigator" "--output-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/ament_flake8/flake8.txt" "--command" "/opt/ros/jazzy/bin/ament_flake8" "--xunit-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_flake8/cmake/ament_flake8.cmake;69;ament_add_test;/opt/ros/jazzy/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;19;ament_flake8;/opt/ros/jazzy/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/jazzy/share/ament_cmake_auto/cmake/ament_auto_package.cmake;110;ament_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;52;ament_auto_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/lint_cmake.xunit.xml" "--package-name" "navigator" "--output-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/jazzy/bin/ament_lint_cmake" "--xunit-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/jazzy/share/ament_cmake_auto/cmake/ament_auto_package.cmake;110;ament_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;52;ament_auto_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/pep257.xunit.xml" "--package-name" "navigator" "--output-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/ament_pep257/pep257.txt" "--command" "/opt/ros/jazzy/bin/ament_pep257" "--xunit-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/jazzy/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/jazzy/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/jazzy/share/ament_cmake_auto/cmake/ament_auto_package.cmake;110;ament_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;52;ament_auto_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/xmllint.xunit.xml" "--package-name" "navigator" "--output-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/ament_xmllint/xmllint.txt" "--command" "/opt/ros/jazzy/bin/ament_xmllint" "--xunit-file" "/home/ethereal/qianli/rm_decision/navigator_test_unit/build/navigator/test_results/navigator/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/jazzy/share/ament_cmake_auto/cmake/ament_auto_package.cmake;110;ament_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;52;ament_auto_package;/home/ethereal/qianli/rm_decision/navigator_test_unit/src/navigator/CMakeLists.txt;0;")
