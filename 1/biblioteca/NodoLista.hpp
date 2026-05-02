//
// Created by GRINGO on 1/05/2026.
//

#ifndef INC_1_NODOLISTA_HPP
#define INC_1_NODOLISTA_HPP
#include "ElementoLista.hpp"
struct NodoLista {
    struct ElementoLista elemento;
    struct NodoLista *siguiente;
};
#endif //INC_1_NODOLISTA_HPP