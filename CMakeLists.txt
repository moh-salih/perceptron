cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(perceptron)

set(SOURCE_FILES 
    main.cpp
    Perceptron.h Perceptron.cpp
    RandomGenerator.h RandomGenerator.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
