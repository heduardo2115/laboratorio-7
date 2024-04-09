#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void guardarDatos() {
    ofstream archivo("datos.txt", ios::app); 

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    string nombre;
    int edad;
    
    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese la edad: ";
    cin >> edad;

    archivo << nombre << "," << edad << "años" << endl;

    archivo.close(); 
}


void mostrarDatos() {
    ifstream archivo("datos.txt");

    if (!archivo.is_open()) {
        cout << "El archivo no existe o no se pudo abrir." << endl;
        return;
    }

    string linea;

    
    cout << "Datos almacenados:" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close(); 
}

int main() {
    char opcion;

    do {
        cout << "\n1. Ingresar datos" << endl;
        cout << "2. Mostrar datos" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case '1':
                cin.ignore(); 
                guardarDatos();
                break;
            case '2':
                mostrarDatos();
                break;
            case '3':
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese una opción válida." << endl;
        }
    } while (opcion != '3');

    return 0;
}
