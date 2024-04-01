#include <iostream>
#include "../clases/nequi.cpp"

using namespace std;

int main(){
    bool login = false;
    Nequi nequi1;
    cout << "Creando cuenta de Nequi" << endl;
    nequi1.crearCuenta();
    cout << "Bienvenido a nequi" << endl;
    cout << "Login:" << endl;
    while (login == false){
        login = nequi1.login();
    }
    nequi1.setSaldo(1000000); // saldo inicial de prueba
    cout << "Bienvenido " << nequi1.getNombre() << " " << nequi1.getApellido() << endl;
    cout << "Saldo: " << nequi1.getSaldo() << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Transferir" << endl;
    cout << "2. Retirar" << endl;
    cout << "3. Recargar cuenta" << endl;
    cout << "4. Agregar transaccion" << endl;
    cout << "5. Mostrar transacciones" << endl;
    cout << "6. Cambiar clave" << endl;

    int opcion;
    cin >> opcion;

    bool salir = false;
    while (salir == false){
        switch (opcion){
            case 1:
                int valor;
                cout << "Ingrese el valor a transferir: ";
                cin >> valor;
                cout << "A que numero de telefono desea transferir?";
                int telefono;
                cin >> telefono;
                Nequi cuentaProv;
                cuentaProv.setTelefono(telefono);
                nequi1.transferir(valor, cuentaProv);
                if (valor > nequi1.getSaldo()){
                    cout << "Saldo insuficiente" << endl;
                    break;
                } else {
                    nequi1.transferir(valor, cuentaProv);
                    cout << "TRANSFERIDO! Nuevo Saldo: " << nequi1.getSaldo() << endl;
                }
                break;
            case 2:
                int valor2;
                cout << "Ingrese el valor a retirar: ";
                cin >> valor2;
                nequi1.retirar(valor2);
                cout << "Nuevo Saldo: " << nequi1.getSaldo() << endl;
                break;
            case 3:
                int valor3;
                cout << "Ingrese el valor a recargar: ";
                cin >> valor3;
                nequi1.consignar(valor3);
                cout << "Nuevo Saldo: " << nequi1.getSaldo() << endl;
                break;
            case 4:
                int transaccion;
                cout << "Ingrese el valor de la transaccion: ";
                cin >> transaccion;
                nequi1.agregarTransaccion(transaccion);
                cout << "Transaccion agregada" << endl;
                break;
            case 5:
                cout << "Transacciones: " << endl;
                nequi1.mostrarTransacciones();
                break;
            case 6:
                string nuevaClave;
                cout << "Ingrese su nueva clave: ";
                cin >> nuevaClave;
                nequi1.cambiarClave(nuevaClave);
                cout << "Clave cambiada" << endl;
                break;
        }
        salir = true;
        break;
    }
    return 0;
}