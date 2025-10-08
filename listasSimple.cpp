#include <iostream>
#include <string>
using namespace std;

struct Nodo{
    int dato;
    Nodo * link;
};
void insertar_inicio(Nodo*&head, int valor){
    Nodo*nuevo = new Nodo;
    nuevo -> dato = valor;
    nuevo-> link = head;
    head = nuevo;
}



int main() {
    
    return 0;
}