#include <iostream>
#include <list>

using namespace std;

int main(){
    list<string> frutas;
    frutas.push_back("Manzana");
    frutas.push_back("Pera");
    frutas.push_back("Uva");
    frutas.push_back("Melon");
    frutas.push_back("Fresa");

    // para mostrar esto
    for (const auto & elemento : frutas){
        cout << elemento << endl;
    }

    // adicionar fruta en posicion especifica
    // auto es iterador
    auto it = next(frutas.begin(), 1); // 1 insterta en la segunda posicion
    frutas.insert(it, "Arandano");

    // para mostrar esto
    for (const auto & elemento : frutas){
        cout << elemento << endl;
    }

    // eliminar fruta del primer elemento
    frutas.pop_front();

    // eliminar fruta de una posicion especifica
    auto it2 = next(frutas.begin(), 2);
    frutas.erase(it2);

    // mostrar primer y ultimo elemento
    frutas.front();
    frutas.back();

    // mostrar un elemento en una posicion especifica
    auto it3 = next(frutas.begin(), 2);
    cout << *it3 << endl; // *it3 es el valor que tiene el apuntador it3

    // tarea: crear lista de reproducción de spotify y que el usuario pueda crear su propia lista de reproducción
    // lista enlazada con mi amigo de spotify like a jam. (se crea la lista de una y la otra persona).

    return 0;
};