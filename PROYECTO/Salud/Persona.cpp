#include <iostream>
#include <list>

using namespace std;

class Persona{ //aplicar el principio de encapsulamiento para que los atributos sean privados.
    private:
    string tipoDoc;
    int documento;
    string nombre;
    string apellido;
    float peso;
    float estatura;
    int edad;
    string sexo;

    // constructor vacio
    public:
    Persona(){
    
    }

    /*
    En caso de querer invocar metodos privados en mi main, debo hacerlos publicos. Esto se logra creando
    un nuevo método publico que invoque al método privado dentro de la clase, luego en el main, invoco este
    nuevo método publico.
    */

   // definiendo metodos accesores

   public:

   void setTipoDoc(string newTyDoc){
       tipoDoc = newTyDoc;
    }

    string getTipoDoc(){
        return tipoDoc;
    }

    void setDocumento(int newDoc){
        documento = newDoc;
    }

    int getDocumento(){
        return documento;
    }

    void setNombre(string newNombre){
        nombre = newNombre;
    }

    string getNombre(){
        return nombre;
    }

    void setApellido(string newApellido){
        apellido = newApellido;
    }

    string getApellido(){
        return apellido;
    }

    void setPeso(float newPeso){
        peso = newPeso;
    }

    float getPeso(){
        return peso;
    }

    void setEstatura(float newEstatura){
        estatura = newEstatura;
    }

    float getEstatura(){
        return estatura;
    }

    void setEdad(int newEdad){
        edad = newEdad;
    }

    int getEdad(){
        return edad;
    }

    void setSexo(string newSexo){
        sexo = newSexo;
    }

    string getSexo(){
        return sexo;
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

    float calcularIMC(){ //check
        float imc = peso/(estatura*estatura);
        return imc;
    }

    void mayorEdad(){
        if (edad >= 18){
            cout << "Es mayor de edad" << endl;
        } else {
            cout << "Es menor de edad" << endl;
        }
    }
};

class Empleado : Persona{ //mostrar todo lo que se ha aprendido en la clase de herencia.
    private:
    string cargo;
    int valorHora;
    float horasTrabajadas;
    string departamento;

    public:
    void setCargo(string newCargo){
        cargo = newCargo;
    }

    string getCargo(){
        return cargo;
    }

    void setValorHora(int newValorHora){
        valorHora = newValorHora;
    }

    int getValorHora(){
        return valorHora;
    }

    void setHorasTrabajadas(float newHorasTrabajadas){
        horasTrabajadas = newHorasTrabajadas;
    }

    float getHorasTrabajadas(){
        return horasTrabajadas;
    }

    void setDepartamento(string newDepartamento){
        departamento = newDepartamento;
    }

    string getDepartamento(){
        return departamento;
    }

    Empleado(){
    }

    void pedirDatos(){
        // si queremos tener el metodo de la clase madre, se invoca así:
        // Persona::pedirDatos();
        cout << "Ingrese el cargo: ";
        cin >> cargo;
        cout << "Ingrese el valor de la hora: ";
        cin >> valorHora;
        cout << "Ingrese las horas trabajadas: ";
        cin >> horasTrabajadas;
        cout << "Ingrese el departamento: ";
        cin >> departamento;
    }

    void mostrarDatos(){
        cout << "Cargo: " << cargo << endl;
        cout << "Valor de la hora: " << valorHora << endl;
        cout << "Horas trabajadas: " << horasTrabajadas << endl;
        cout << "Departamento: " << departamento << endl;
    }
        
    void calcularHorarios(){
        int valor = (valorHora * horasTrabajadas);
        int reteica = valor - (valor * 0.00966);

        cout << getTipoDoc() << " " << getDocumento() << endl;
        cout << "Nombre: " << getNombre() << " " << getApellido() << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "Horas trabajadas: " << horasTrabajadas << endl;
        cout << "Valor hora: " << valorHora << endl;
        cout << "Total a pagar: " << reteica << endl;
    }

    int mayorEdad(int fechaNacimiento){
        int edad = 2024 - fechaNacimiento;
        return edad;
    }
};

int main(){
    Persona persona1;
    persona1.pedirDatos();
    persona1.mostrarPersona();
    persona1.calcularIMC();
    if (persona1.calcularIMC() < 20){
        cout << "Peso bajo" << endl;
    } else if (20 < persona1.calcularIMC() < 25){
        cout << "Peso ideal" << endl;
    } else if (persona1.calcularIMC() > 25){
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Error" << endl;
    }
    persona1.mayorEdad();

    return 0;
};

/*
metodos accesores: setters y getters.

Si es para registrar o modificar datos, es un setter.
Si es para consultar datos, es un getter.
Esto se le conoce como encapsulamiento.
*/

