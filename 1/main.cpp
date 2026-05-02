#include "biblioteca/AuxiliaryFunctions.hpp"




int main() {
    Lista lista;

    contruir_lista(lista);


    ElementoLista e;
    // [17, Messala, Rojo]
    e.id = 17;
    strcpy(e.nombre, "Messala");
    strcpy(e.equipo, "Rojo");
    insertarAlInicio(lista, e);

    // [4, BenHur, Azul]
    e.id = 4;
    strcpy(e.nombre, "BenHur");
    strcpy(e.equipo, "Azul");
    insertarAlFinal(lista, e);

    // [12, Artax, Verde]
    e.id = 12;
    strcpy(e.nombre, "Artax");
    strcpy(e.equipo, "Verde");
    insertarAlFinal(lista, e);

    // [7, Drusus, Negro]
    e.id = 7;
    strcpy(e.nombre, "Drusus");
    strcpy(e.equipo, "Negro");
    insertarAlFinal(lista, e);

    e.id = 2;
    strcpy(e.nombre, "AAAA");
    strcpy(e.equipo, "EEEEE");
    insertarAlFinal(lista, e);


    cout << "Original: ";
    imprimir(lista);


    reordenarLista(lista);

    cout << "Resultado: ";
    imprimir(lista);



    Lista lista2;

    contruir_lista(lista2);
    ElementoLista f;
    // [17, Messala, Rojo]
    f.id = 26;
    strcpy(f.nombre, "olololo");
    strcpy(f.equipo, "Rojo");
    insertarAlFinal(lista2, f);


    unirListas(lista, lista2);

    imprimir(lista);
    reordenarLista(lista);
    imprimir(lista);
    eliminarPorId(lista, 26);
    imprimir(lista);





    return 0;
}
