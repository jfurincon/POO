#include <iostream>

using namespace std;

template <typename T>
class Nodo{
    private:
    T dato;
    Nodo* next;

    public:
    Nodo(){
        next = NULL;
    }
    Nodo(T d){
        dato = d;
        next = NULL;
    }
    void setDato(T d){
        dato = d;
    }
    T getDato(){
        return dato;
    }
    Nodo<T>* getNext(){
        return next;
    }
    void setNext(Nodo<T>* n){
        next = n;
    }
    // metodos propios

};

template <typename T>
class Lista{
    private:
    Nodo<T>* ptr;
    int size;

    public:
    Lista(){
        ptr = NULL;
        size = 0;
    }
    
};