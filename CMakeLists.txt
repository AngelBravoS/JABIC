cmake_minimum_required(VERSION 2.8)

project(JABIC)

set(CMAKE_CXX_COMPILER "g++")

set(CMAKE_CXX_FLAGS "-Wall -O2 -g -march=native -std=c++11")


set(JABIC_SOURCES
			main.cpp
			Blockchain.cpp
			Block.cpp
			sha256.cpp)

include_directories(./)

add_executable(JABIC ${JABIC_SOURCES})
