#include <iostream>
#include "../Salud/Persona.cpp"

using namespace std;

int main(){
    Persona persona1;
    persona1.pedirDatos();
    persona1.mostrarPersona();
    persona1.calcularIMC();
    return 0;
}
// como invocar los metodos desde inicio, cuando los metodos son privados.
// leer herencia, encapsulamiento, sobrecarga, interfaces, clases abstractas en c++
// como invocar los metodos desde inicio cuando los metodos son privados (hacerlo)