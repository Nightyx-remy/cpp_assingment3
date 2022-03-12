cmake_minimum_required(VERSION 3.20)
project(cpp_assingment3)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall -Wextra -pedantic")

add_executable(cpp_assingment3 main.cpp Rational.cpp Rational.h RationalCalc.cpp RationalCalc.h RationalProcessor.cpp RationalProcessor.h)
