//
// Created by GRINGO on 1/05/2026.
//

#ifndef INC_1_AUXILIARYFUNCTIONS_HPP
#define INC_1_AUXILIARYFUNCTIONS_HPP

#include <iostream>
#include <iomanip>
#include  <cstring>
#include "Lista.hpp"
#include "AuxiliaryFunctions.hpp"
using namespace std;

void contruir_lista(Lista &lista);

void insertarAlFinal( Lista &lista,
                     const ElementoLista &elemento);

void imprimir(const Lista & lista);
bool esListaVacia(const Lista & lista);
void reordenarLista( Lista & lista);
void unirListas( Lista & lista,  Lista & lista2);
void eliminarPorId( Lista & lista, int id);
void insertarAlInicio(Lista &lista, const ElementoLista &elemento);
#endif //INC_1_AUXILIARYFUNCTIONS_HPP
