cmake_minimum_required(VERSION 3.13)

project("roman_numerals"
        VERSION "0.1.0"
        HOMEPAGE_URL "https://github.com/beached/roman_numerals"
        LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17 CACHE STRING "The C++ standard whose features are requested.")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
message("CMAKE_CXX_STANDARD=${CMAKE_CXX_STANDARD}")

add_subdirectory(extern)

add_executable( roman_numerals src/roman_numerals.cpp )
target_link_libraries( roman_numerals daw::header_libraries )
