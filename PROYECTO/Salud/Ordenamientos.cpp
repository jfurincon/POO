#include <iostream>
#include <list>

using namespace std;

/*listas enlazadas
hacer una lista de reproduccion de spotify
*/

// definir la estructura Nodo para la lista enlazada

struct Nodo{
    int data;
    Nodo *next;
    Nodo (int val):data(val), next(nullptr){}
};

// crear funcion que me va a permitir insertar

void insertarInicio(Nodo* &head, int val){
    Nodo* nuevo = new Nodo(val);
    nuevo->next = head;
    head = nuevo;

};

// crear funcion que me va a permitir ver la lista

void mostrarLista(Nodo* head){
    while (head != nullptr){
        cout << head->data << " - ";
        head = head->next;
    }
    cout << endl;
};

int main(){
    /*
    Nodo* head = nullptr;
    insertarInicio(head, 5);
    insertarInicio(head, 4);
    insertarInicio(head, 3);

    cout << "Lista: ";
    mostrarLista(head);
    */

    list<string> canciones;
    // hacer lista de canciones
    canciones.push_back("Coleccionista de canciones");
    canciones.push_back("La distancia");
    canciones.push_back("Smells like teen spirit");
    canciones.push_back("Bohemian Rhapsody");
    canciones.push_back("Hotel California");
    canciones.push_back("Stairway to heaven");
    canciones.push_back("Sweet child o' mine");
    canciones.push_back("November rain");
    canciones.push_back("Don't cry");
    canciones.push_back("Paradise city");

    // hacer lista de reproduccion con las canciones haciendo consulta en la lista incial
    
    // lista de reproduccion 1
    list<string> listaReproduccion1;
    int input = 1;
    while (input == 1){
        string cancionAgregar;
        cout << "Desea agregar una cancion a la lista de reproduccion?" << endl;
        cout << "1 = si, 0 = no" << endl;
        cin >> input;
        cout << "Que cancion desea agregar?" << endl;
        cin >> cancionAgregar;
        for (const auto & elemento : canciones){
            if (cancionAgregar == elemento){
                listaReproduccion1.push_back(elemento);
            }else{
                canciones.push_back(elemento);
            }
        }
    }

    // crear lista de reproduccion 2
    list<string> listaReproduccion2;
    int input2 = 1;
    while (input2 == 1){
        string cancionAgregar2;
        cout << "Desea agregar una cancion a la lista de reproduccion?" << endl;
        cout << "1 = si, 0 = no" << endl;
        cin >> input;
        cout << "Que cancion desea agregar?" << endl;
        cin >> cancionAgregar2;
        for (const auto & elemento : canciones){
            if (cancionAgregar2 == elemento){
                listaReproduccion2.push_back(elemento);
            }else{
                canciones.push_back(elemento);
            }
        }
    }

    // hacer una lista de reproduccion enlazada con mi amigo de spotify like a jam
    list<string> listaJam;
    // iteradores de cada lista
    auto it1 = listaReproduccion1.begin();
    auto it2 = listaReproduccion2.begin();

    while (it1 != listaReproduccion1.end() && it2 != listaReproduccion2.end()) {
        listaJam.push_back(*it1);
        listaJam.push_back(*it2);
        ++it1;
        ++it2;
    }

    // imprimir jam
    cout << "Lista Jam: " << endl;
    //find(listaJam.begin(), listaJam.end(), "Coleccionista de canciones");
    for (const auto & elemento : listaJam){
        cout << elemento << endl;
    }

    // ordenamientos

    // ordenar lista de reproduccion 1
    listaReproduccion1.sort(); // de la A a la Z
    // ordenar lista de reproduccion 2
    listaReproduccion2.sort(); // primero de la A a la Z
    listaReproduccion2.reverse(); // luego de la Z a la A

    // Busquedas en listas
    // Canciones que empiezan por la letra S
    for (const auto & elemento : canciones){
        if (elemento.front() == 'S'){
            cout << elemento << endl;
        }
    }
}


// temas calificables.
//poo, herencia, polimorfismo, encapsulamiento, abstraccion y sobrecarga.
//listas, ordenamientos, busquedas, listas enlazadas.