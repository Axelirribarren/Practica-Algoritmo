#include <iostream>
using namespace std;
///------ESTRUCTURA BASICA------///
//PARA CREAR UNA LISTA DE NODOS Y QUE CADA NODO TENGA SU LISTA DE ARCOS.
struct NodoGrafo{
    int id;
    struct NodoArco* listaArcos;
    struct NodoGrafo* siguiente;
};
struct NodoArco{
    int id;
    struct NodoGrafo* destino;
    struct NodoArco* siguiente;
};

int main() {
    
    return 0;
}
NodoGrafo * crearNuevoNodo(int id){
    NodoGrafo * nuevoNodo = new NodoGrafo;
    nuevoNodo -> id = id;
    nuevoNodo -> siguiente = nullptr;
    nuevoNodo -> listaArcos = nullptr;
    return nuevoNodo;
}

void agregarNodo(NodoGrafo*grafo, int id){
    NodoGrafo*nuevoNodo = crearNuevoNodo(id);
    nuevoNodo -> siguiente = grafo;
    grafo = nuevoNodo;
}