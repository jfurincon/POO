#include <iostream>
#include <list>

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
        int saldo;
        list<int> transacciones;

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

        void setSaldo(int newSaldo){
            saldo = newSaldo;
        }

        int getSaldo(){
            return saldo;
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

        bool login(){
            int telefonoIngresado;
            string claveIngresada;
            cout << "Ingrese su telefono: ";
            cin >> telefonoIngresado;
            if(telefonoIngresado != telefono){
                cout << "Telefono incorrecto" << endl;
                return false;
            }
            cout << "Ingrese su clave: ";
            cin >> claveIngresada;
            if(claveIngresada == clave){
                cout << "Bienvenido a Nequi" << endl;
                return true;
            }else{
                cout << "Clave incorrecta" << endl;
                return false;
            }
        }

        void mostrarDatos(){
            getNombre();
            getApellido();
            getCedula();
            getTelefono();
            getCorreo();
        }

        void consignar(int valor){
            saldo += valor;
        }

        void retirar(int valor){
            saldo -= valor;
        }

        void transferir(int valor, Nequi cuenta){
            saldo -= valor;
            cuenta.saldo += valor;
        }

        void consultarSaldo(){
            getSaldo();
        }

        void cambiarClave(string nuevaClave){
            clave = nuevaClave;
        }

        void agregarTransaccion(int valor){
            transacciones.push_back(valor);
        }
};