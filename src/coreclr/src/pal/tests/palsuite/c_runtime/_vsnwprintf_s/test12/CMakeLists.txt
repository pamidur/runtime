set(SOURCES
  test12.cpp
)

add_executable(paltest_vsnwprintf_test12
  ${SOURCES}
)

add_dependencies(paltest_vsnwprintf_test12 coreclrpal)

target_link_libraries(paltest_vsnwprintf_test12
  ${COMMON_TEST_LIBRARIES}
)
