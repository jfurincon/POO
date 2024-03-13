#include <iostream>
#include "../Salud/Persona.cpp"

using namespace std;

int main(){
    Persona persona1;
    persona1.pedirDatos();
    persona1.mostrarPersona();
    persona1.calcularIMC();
    if ((persona1.calcularIMC()) < 20){
        cout <<"Peso bajo" << endl;
    }else if ((persona1.calcularIMC()) >= 20 && persona1.calcularIMC() <= 25){
        cout <<"Peso Ideal" << endl;
    }else if ((persona1.calcularIMC()) > 25){
        cout <<"Sobrepeso" << endl;
    }
    return 0;
}
// como invocar los metodos desde inicio, cuando los metodos son privados.
// leer herencia, encapsulamiento, sobrecarga, interfaces, clases abstractas en c++
// como invocar los metodos desde inicio cuando los metodos son privados (hacerlo)