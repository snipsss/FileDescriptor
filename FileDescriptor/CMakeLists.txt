cmake_minimum_required(VERSION 3.1)
project(FileIpDescriptor VERSION 1.0)
include_directories("${CMAKE_CURRENT_SOURCE_DIR}")
add_executable(FILEDESCRIPTOR / 
            InterFaceDescriptor.cpp
            InterFaceDescriptor.h
            Main.cpp
            output.txt
            Run.cpp
            Validator.cpp
            Validator.h
)


set_target_properties(FILEDESCRIPTOR PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")