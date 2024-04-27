cmake_minimum_required(VERSION 3.24)


set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(app)


find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

set(SOURCE_FILES 
    main.cpp
    Perceptron.h Perceptron.cpp
    RandomGenerator.h RandomGenerator.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})



target_link_libraries(${PROJECT_NAME}  ${OpenCV_LIBS})