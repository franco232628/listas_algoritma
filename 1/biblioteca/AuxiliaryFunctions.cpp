//
// Created by GRINGO on 1/05/2026.
//

#include "AuxiliaryFunctions.hpp"

#include <pstl/execution_defs.h>

void contruir_lista(Lista &lista) {
    lista.inicio = nullptr;
    lista.fin = nullptr;
    lista.longitud = 0;
}

void insertarAlFinal(Lista &lista, const ElementoLista &elemento) {

}
void insertarAlInicio(Lista &lista, const ElementoLista &elemento) {

}

void imprimir(const Lista &lista) {

    if (esListaVacia(lista)) {
        cout << "Lista vacia" << endl;
        return;
    }

    NodoLista *p = lista.inicio;

    cout << "[ ";
    while (p) {
        cout << p->elemento.id
             << "(" << p->elemento.nombre << ")"<< " (" << p->elemento.equipo << ") ";
        if (p->siguiente != nullptr)//hay mas datos en el siguiente
            cout << ", ";
        p = p->siguiente;
    }

    cout << " ]" << endl;
}

bool esListaVacia(const Lista &lista) {
    return lista.inicio == nullptr;
}

void reordenarLista(Lista &lista) {


}
void unirListas(Lista &l1, Lista &l2) {

}

void eliminarPorId(Lista &lista, int id) {

}



void insertarEnOrden(Lista &lista, const ElementoLista &elemento) {

}

NodoLista* buscarPorId(Lista lista, int id) {

}

/*


void contruir_lista(Lista &lista) {
    lista.inicio = nullptr;
    lista.fin = nullptr;
    lista.longitud = 0;
}

void insertarAlFinal(Lista &lista, const ElementoLista &elemento) {
    struct NodoLista *nuevo = new NodoLista;

    nuevo->elemento = elemento;
    nuevo->siguiente = nullptr;

    if (lista.inicio == nullptr) {
        lista.inicio = nuevo;
        lista.fin = nuevo;
    }
    else {

        lista.fin->siguiente = nuevo;
        lista.fin= nuevo;
    }

    lista.longitud++;
}



void imprimir(const Lista &lista) {

    if (esListaVacia(lista)) {
        cout << "Lista vacia" << endl;
        return;
    }

    NodoLista *p = lista.inicio;

    cout << "[ ";
    while (p) {
        cout << p->elemento.id
             << "(" << p->elemento.nombre << ")"<< " (" << p->elemento.equipo << ") ";
        if (p->siguiente != nullptr)//hay mas datos en el siguiente
            cout << ", ";
        p = p->siguiente;
    }

    cout << " ]" << endl;
}

bool esListaVacia(const Lista &lista) {
    return lista.inicio == nullptr;
}

void reordenarLista(Lista &lista) {
    NodoLista *parInicio = nullptr;
    NodoLista *parFin = nullptr;
    NodoLista *imparInicio = nullptr;
    NodoLista *imparFin = nullptr;

    NodoLista *p = lista.inicio;

    while (p) {
        NodoLista *siguiente = p->siguiente;
        p->siguiente = nullptr;

        if (p->elemento.id %2 == 0) {
            //si es par
            if (parInicio == nullptr) {
                //si esta vaicia sera inicioo y fianl
                parInicio = p;
                parFin = p;
            }
            else {
                //sino insertamos al final
                parFin->siguiente = p;
                parFin = p;
            }
        }else {
            if (imparInicio == nullptr) {
                //si esta vaicia sera inicioo y fianl
                imparInicio = p;
                imparFin = p;
            }
            else {
                //sino insertamos al final
                imparFin->siguiente = p;
                imparFin = p;
            }
        }
        p = siguiente;
    }
    //unir
    if (parInicio == nullptr) { // si no hay pares
        lista.inicio = imparInicio;
        lista.fin = imparFin;
    }else {
        lista.inicio = parInicio;
        //conecto
        parFin->siguiente = imparInicio;
        if (imparFin == nullptr) lista.fin = parFin;
        else lista.fin = imparFin;
    }


}
void unirListas(Lista &l1, Lista &l2) {
    if (l1.inicio == nullptr) {
        l1 = l2;
    } else if (l2.inicio != nullptr) {
        l1.fin->siguiente = l2.inicio;
        l1.fin = l2.fin;
    }
    l1.longitud += l2.longitud;
}

void eliminarPorId(Lista &lista, int id) {
    NodoLista *p = lista.inicio;
    NodoLista *ant = nullptr;

    while (p != nullptr) {
        if (p->elemento.id == id) {

            // si es el primero
            if (ant == nullptr) {
                lista.inicio = p->siguiente;
            } else {
                ant->siguiente = p->siguiente;
            }

            // si es el último
            if (p == lista.fin) {
                lista.fin = ant;
            }

            delete p;
            lista.longitud--;
            return;
        }

        ant = p;
        p = p->siguiente;
    }
}
void insertarAlInicio(Lista &lista, const ElementoLista &elemento) {
    NodoLista *nuevo = new NodoLista;
    nuevo->elemento = elemento;

    nuevo->siguiente = lista.inicio;
    lista.inicio = nuevo;

    // si estaba vacía
    if (lista.fin == nullptr) {
        lista.fin = nuevo;
    }

    lista.longitud++;
}



void insertarEnOrden(Lista &lista, const ElementoLista &elemento) {
    NodoLista *nuevo = new NodoLista;
    nuevo->elemento = elemento;
    nuevo->siguiente = nullptr;

    NodoLista *p = lista.inicio;
    NodoLista *ant = nullptr;

    // buscar posición
    while (p != nullptr && p->elemento.id < elemento.id) {
        ant = p;
        p = p->siguiente;
    }

    // insertar al inicio
    if (ant == nullptr) {
        nuevo->siguiente = lista.inicio;
        lista.inicio = nuevo;
    }
    else {
        ant->siguiente = nuevo;
        nuevo->siguiente = p;
    }

    // actualizar fin
    if (p == nullptr) {
        lista.fin = nuevo;
    }

    lista.longitud++;
}

NodoLista* buscarPorId(Lista lista, int id) {
    NodoLista *p = lista.inicio;

    while (p) {
        if (p->elemento.id == id) {
            return p; // encontrado
        }
        p = p->siguiente;
    }

    return nullptr; // no encontrado
}


*/