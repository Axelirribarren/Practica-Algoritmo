#include <iostream>
using namespace std;

struct NodoGrafo{
    int id_nodo;
    NodoArco*lista_arco;
    NodoGrafo*link;
};typedef NodoGrafo NGrafo;
struct NodoArco{
    int id_arco;
    NodoGrafo*destino;
    NodoArco*link;
};typedef NodoArco NArco;

void agregar_nodo_grafo(NGrafo*&lista_n, int id){
    NGrafo*aux = lista_n;
    while(aux != NULL){
        if(aux ->id_nodo == id){
            cout << "YA EXISTE!" << endl;
            return;
        }
        aux = aux ->link;
    }
    aux = new(NGrafo);
    aux ->id_nodo = id;
    aux ->lista_arco = NULL;
    aux -> link = lista_n;
    lista_n = aux;
}

void agregar_arco_nodo (NGrafo*&lista_n, int id_arco, int id_nodo_origen, int id_nodo_destino){
    NGrafo* nodo_origen = lista_n;
    NGrafo* nodo_destino = lista_n;
    while(nodo_origen != NULL && nodo_origen ->id_nodo != id_nodo_origen){
        nodo_origen = nodo_origen -> link;
    }
    while(nodo_destino != NULL && nodo_destino -> id_nodo != id_nodo_destino){
        nodo_destino = nodo_destino -> link;
    }
    if(nodo_origen == NULL || nodo_destino == NULL){
        cout << "ERROR: Algunos de los nodo no existe" << endl;
        return;
    }
}

int main() {
    
    return 0;
}