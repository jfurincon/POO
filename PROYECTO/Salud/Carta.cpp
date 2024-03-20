#include <iostream>
#include <list>
#include <vector>

using namespace std;


// ordenamiento de arrays
class Carta{
    string pinta;
    string valor;
    string vectCartas[];

    // constructor vacio
    Carta(){
        pinta = "";
        valor = "";
    }

    // constructor con parametros
    Carta(string pinta, string valor){
        this->pinta = pinta;
        this->valor = valor;
    }

    // getters
    string getPinta(){
        return pinta;
    }

    string getValor(){
        return valor;
    }

    string getVectCartas(){
        return vectCartas;
    }

    // setters
    void setPinta(string pinta){
        this->pinta = pinta;
    }

    void setValor(string valor){
        this->valor = valor;
    }

    void setVectCartas(string vectCartas){
        this->vectCartas = vectCartas;
    }

    //metodos

    // ordenamiento
    void ordBur(string arr[], int n){
        for (int i = 0; i < n-1, i++){
            for (int j = 0; j < n-i-1; j++){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                if (arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }

    void vectOrdenado(string arr[], int n){
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
            cout << endl;
        }
    }

    void agregarCarta(string carta){
        vectCartas.push_back(carta);
    }
};

// ordenamiento de listas
struct Node{
    int data;
    Node* next;
    Node(int val):data(val), next(nullptr){}
};

// funcion para insertar un Nodo al inicio de la lista
void insertarInicio(Node* &head, int val){
    Node* nuevoNodo = new Node(val);
    nuevoNodo->next = head;
    head = nuevoNodo;
}

// funcion para mostrar la lista
void imprimirLista(Node* head){
    while (head != nullptr){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// funcion para ordenar la lista
void orderList(Node* &head){
    if (head == nullptr || head->next == nullptr){
        return;
    }
    Node* sorted = nullptr;
    Node* current = head;

    while (current != nullptr){
        Node* next = current->next;
        if (sorted == nullptr || sorted->data >= current->data){
            current->next = sorted;
            sorted = current;
        }else{
            Node* temp = sorted;
            while (temp->next != nullptr && temp-next->data < current->data){
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    head = sorted;
}

int main(){
    /*
    string cartasPoker[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    int n = sizeof(cartasPoker)/sizeof(cartasPoker[0]);
    */
    Node* head = nullptr;
    insertarInicio(head, 5);
    insertarInicio(head, 40);
    insertarInicio(head, 3);
    insertarInicio(head, 20);

    cout << "Lista: " << endl;
    imprimirLista(head);

    orderList(head);
    cout << "Lista ordenada: " << endl;
    imprimirLista(head);

    return 0;
}
    