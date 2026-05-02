cmake_minimum_required(VERSION 4.0)
project(1)

set(CMAKE_CXX_STANDARD 20)

add_executable(1 main.cpp
        biblioteca/AuxiliaryFunctions.cpp
        biblioteca/AuxiliaryFunctions.hpp
        biblioteca/Lista.hpp
        biblioteca/NodoLista.hpp
        biblioteca/ElementoLista.hpp)
