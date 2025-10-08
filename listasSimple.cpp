#include <iostream>
#include <string>
using namespace std;

struct Nodo{
    int dato;
    Nodo*link;
};

void insertarNodo(Nodo*&nodo, int valor){
    Nodo*nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo -> link = nodo;
    nodo = nuevo;
}
void insertarNodoFinal(Nodo*&nodo, int valor){
    Nodo*nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo -> link = NULL;
    if(nodo == NULL){
        nodo = nuevo;
        return;
    }
    Nodo*aux = nodo;
    while(aux -> link != NULL) aux =aux -> link;
    aux -> link = nuevo;
}
void mostrar(Nodo*&nodo){
    Nodo*aux = nodo;
    cout << "LISTA: ";
    while(aux != NULL){
        cout << aux -> dato << " -> ";
        aux = aux -> link;
    }
    cout << "NULL" << endl;
}
void liberar(Nodo*&nodo){
    Nodo*aux;
    while(nodo != NULL){
        aux = nodo;
        nodo = nodo -> link;
        delete aux;
    }
}
int main() {
    Nodo*prueba = NULL;
    insertarNodo(prueba, 1);
    insertarNodo(prueba, 2);
    insertarNodo(prueba, 3);
    insertarNodoFinal(prueba, 1);
    mostrar(prueba);
    liberar(prueba);

    system("pause");

    return 0;
}