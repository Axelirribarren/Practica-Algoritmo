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
//Crear el nuevo "nodo" para el grafo
NodoGrafo * crearNodoGrafo(int id){
    NodoGrafo* nuevoNodo = new NodoGrafo;
    nuevoNodo -> id = id;
    nuevoNodo -> siguiente = nullptr;
    nuevoNodo -> listaArcos = nullptr;
    return nuevoNodo;
}
//Funcion que permite agregar un nodo al grafo
void agregarNodo(NodoGrafo*&grafo, int id){
    NodoGrafo*nuevo = crearNodoGrafo(id);
    nuevo -> siguiente = grafo;
    grafo = nuevo;
}