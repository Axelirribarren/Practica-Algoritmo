#include <iostream>
using namespace std;
//FORMA SIMPLE DE CREAR UN GRAFO
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
NodoArco* crearNodoArco(int id, NodoGrafo*destino){
    NodoArco*nuevoArco = new NodoArco;
    nuevoArco -> id = id;
    nuevoArco -> destino = destino;
    nuevoArco ->siguiente = nullptr;
    return nuevoArco;
}
void agregarArco(NodoGrafo*origen, NodoGrafo*destino,int id){
    if(origen!=nullptr && destino!=nullptr){
        NodoArco*nuevoArco = crearNodoArco(id,destino);
        nuevoArco -> siguiente = origen->listaArcos;
        origen-> listaArcos = nuevoArco;
    }
    
}
void mostrarListaAdyacencia(NodoGrafo*grafo){
    NodoGrafo*actual = grafo;
    while(actual != nullptr){
        cout << "nodo " << actual -> id << " -> ";
        NodoArco*arco = actual -> listaArcos;
        while(arco!=nullptr){
            cout << arco-> id << " ";
            arco = arco -> siguiente;
        }
        cout << endl;
        actual = actual -> siguiente;
    }
}
int main() {
    NodoGrafo*grafo = nullptr;
    agregarNodo(grafo, 1);
    agregarNodo(grafo, 2);
    agregarNodo(grafo, 3);
    agregarArco(grafo,grafo->siguiente,2);
    agregarArco(grafo,grafo->siguiente->siguiente,3);
    agregarArco(grafo->siguiente,grafo->siguiente->siguiente,3);
    
    mostrarListaAdyacencia(grafo);
    system("pause");
    return 0;
}