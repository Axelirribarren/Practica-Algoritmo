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
//Permite crear un nuevo nodo del grafo
NodoGrafo* grafo (int id){
    NodoGrafo* nuevoNodo = new NodoGrafo;
    nuevoNodo -> id = id;
    nuevoNodo -> listaArcos = nullptr;
    nuevoNodo -> siguiente = nullptr;
    return nuevoNodo;
}
