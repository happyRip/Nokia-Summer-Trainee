# CMake generated Testfile for 
# Source directory: C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test
# Build directory: C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(calc-test "C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/build/test/Debug/calc-test.exe")
  set_tests_properties(calc-test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test/CMakeLists.txt;13;add_test;C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(calc-test "C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/build/test/Release/calc-test.exe")
  set_tests_properties(calc-test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test/CMakeLists.txt;13;add_test;C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(calc-test "C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/build/test/MinSizeRel/calc-test.exe")
  set_tests_properties(calc-test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test/CMakeLists.txt;13;add_test;C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(calc-test "C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/build/test/RelWithDebInfo/calc-test.exe")
  set_tests_properties(calc-test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test/CMakeLists.txt;13;add_test;C:/Users/aborb/Documents/GitHub/Nokia-Summer-Trainee/test/RPN_calculator/test/CMakeLists.txt;0;")
else()
  add_test(calc-test NOT_AVAILABLE)
endif()
