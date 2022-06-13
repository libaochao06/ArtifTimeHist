cmake_minimum_required(VERSION 3.21)
project(ArtifTimeHist)

set(CMAKE_CXX_STANDARD 20)

aux_source_directory(./src SRC)
include_directories(./include)

add_executable(ArtifTimeHist ${SRC})
