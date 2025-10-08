#include <iostream>
#include <string>
using namespace std;

struct Nodo{
    int dato;
    Nodo * link;
};

void agregar_Nodo(Nodo*&nodo, int valor){
    Nodo*nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo -> link = nuevo;
    nodo = nuevo;
}
void agregar_Nodo_Final(Nodo*nodo , int valor){
    Nodo*nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo -> link = NULL;
    if(nodo == NULL){
        nodo = nuevo;
        return;
    }
    Nodo*aux = nodo;
    while(aux -> link != NULL) aux = aux -> link;
    aux -> link = nuevo;
}
int main() {
    
    return 0;
}