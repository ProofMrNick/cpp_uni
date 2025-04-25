set(SOURCES
  test_oop.cpp
)

add_executable(test_oop ${SOURCES})
target_link_libraries(test_oop
  gtest_main
  gmock_main
  oop_practice_lib
)

add_test(test_oop test_oop)