#include <iostream>

using namespace std;

class Nequi{
    // Atributos
    private:
        string nombre;
        string apellido;
        int cedula;
        int telefono;
        string correo;
        string clave;

    // constructor
    public:
        Nequi(){

        }

    // metodos accesores
    public:
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

        void setCedula(int newCedula){
            cedula = newCedula;
        }

        int getCedula(){
            return cedula;
        }

        void setTelefono(int newTelefono){
            telefono = newTelefono;
        }

        int getTelefono(){
            return telefono;
        }

        void setCorreo(string newCorreo){
            correo = newCorreo;
        }

        string getCorreo(){
            return correo;
        }

        void setClave(string newClave){
            clave = newClave;
        }

        string getClave(){
            return clave;
        }

    // metodos
    public:
        void crearCuenta(){
            cout << "Para crear una cuenta en Nequi, por favor ingrese los siguientes datos: " << endl;
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Apellido: ";
            cin >> apellido;
            cout << "Cedula: ";
            cin >> cedula;
            cout << "Telefono: ";
            cin >> telefono;
            cout << "Correo: ";
            cin >> correo;
            cout << "Clave: ";
            cin >> clave;

        }

        
};