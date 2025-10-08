#include <iostream>
#include <string>
using namespace std;

struct Nodo{
    int dato;
    Nodo * link;
};

void agregarNodo(Nodo*nodo, int valor){
    Nodo*nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo -> link = nodo;
    nodo = nuevo;
}
void agregarFinalNodo(Nodo*nodo, int valor){
    Nodo*nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo -> link = NULL;
    if(nodo == NULL){
        nodo = nuevo;
        return;
    }
    Nodo * aux = nodo;
    while(aux -> link != NULL) aux = aux -> link;
    aux -> link = nuevo;
}
int main() {
    
    return 0;
}