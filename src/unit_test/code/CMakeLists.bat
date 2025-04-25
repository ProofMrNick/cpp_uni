target_sources(oop_practice_lib
  PRIVATE
    oop_practice.cpp
  PUBLIC
    oop_practice.hpp
)

target_include_directories(oop_practice_lib PUBLIC "${PROJECT_SOURCE_DIR}/code")