#include <iostream>

using namespace std;

class Persona{
    public:
    string tipoDoc;
    int documento;
    string nombre;
    string apellido;
    float peso;
    float estatura;
    int edad;
    string sexo;

    // constructor vacio
    Persona(){
    
    }

    void pedirDatos(){
        cout << "Ingrese el tipo de documento: ";
        cin >> tipoDoc;
        cout << "Ingrese el numero de documento: ";
        cin >> documento;
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cout << "Ingrese el apellido: ";
        cin >> apellido;
        cout << "Ingrese el peso en kg: ";
        cin >> peso;
        cout << "Ingrese la estatura en metros: ";
        cin >> estatura;
        cout << "Ingrese la edad: ";
        cin >> edad;
        cout << "Ingrese el sexo (masculino o femenino): ";
        cin >> sexo;
    }

    void mostrarPersona(){
        cout << "Tipo de documento: " << tipoDoc << endl;
        cout << "Numero de documento: " << documento << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Peso: " << peso << " kg" << endl;
        cout << "Estatura: " << estatura << " mtrs" << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Sexo: " << sexo << endl;
    }

    string calcularIMC(){
        float imc = peso/(estatura*estatura);
        if (imc < 20){
            return "PESOBAJO";
        } else if (20 <= imc <= 25){
            return "PESOIDEAL";
        } else if (imc > 25){
            return "SOBREPESO";
        }else{
            return "ERROR";
        }
    }

    void mayorEdad(){
        if (edad >= 18){
            cout << "Es mayor de edad" << endl;
        } else {
            cout << "Es menor de edad" << endl;
        }
    }
};

class Empleado : Persona{
    public:
    string cargo;
    int valorHora;
    float horasTrabajadas;
    string departamento;

    Empleado(int valorHora){
        this->valorHora = valorHora;
    }

    void calcularHorarios(){
        int valor = (valorHora * horasTrabajadas);
        int reteica = valor - (valor * 0.00966);

        cout << tipoDoc << " " << documento << endl;
        cout << "Nombre: " << nombre << " " << apellido << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "Horas trabajadas: " << horasTrabajadas << endl;
        cout << "Valor hora: " << valorHora << endl;
        cout << "Total a pagar: " << reteica << endl;
    }
};

int main(){
    Persona persona1;
    persona1.pedirDatos();
    persona1.mostrarPersona();
    persona1.calcularIMC();
    if (persona1.calcularIMC() == "PESOBAJO"){
        cout << "Peso bajo" << endl;
    } else if (persona1.calcularIMC() == "PESOIDEAL"){
        cout << "Peso ideal" << endl;
    } else if (persona1.calcularIMC() == "SOBREPESO"){
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Error" << endl;
    }
    persona1.mayorEdad();

    return 0;
};