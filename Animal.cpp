#include <iostream>

using namespace std;


class Animal{
    // atributos
    public:
    string nombreAnimal;
    int edadAnimal;
    // metodos (valor de retorno, nombre, parametros)
    void crearAnimal(){
        cout << "Ingrese el nombre del animal: ";
        cin >> nombreAnimal;
        cout << "Ingrese la edad del animal: ";
        cin >> edadAnimal;
    }
    void consultarAnimal(){
        cout << "El nombre del animal es: " << nombreAnimal << endl;
        cout << "La edad del animal es: " << edadAnimal << endl;
    }
};

class Car{
    public:
    int year;
    string model;
    string motor;

    Car(int x, string y, string z){
        year = x;
        model = y;
        motor = z;
    }
};

int main(){
    Animal animal1;
    animal1.crearAnimal();
    animal1.consultarAnimal();
    return 0;
}