cmake_minimum_required(VERSION 3.16)

project(Fiszki)
include_directories(include)

add_executable(Fiszki src/main.cpp src/Fiszki.cpp src/Polimorfizm.cpp src/Biblioteka_dodatkowa.cpp src/Program.cpp)