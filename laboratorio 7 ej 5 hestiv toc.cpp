#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
    string ocupacion;

public:
    Persona() {
        nombre = "";
        edad = 0;
        ocupacion = "";
    }

    Persona(string _nombre, int _edad, string _ocupacion) {
        nombre = _nombre;
        edad = _edad;
        ocupacion = _ocupacion;
    }

    void setNombre(string _nombre) {
        nombre = _nombre;
    }

    string getNombre() {
        return nombre;
    }

    void setEdad(int _edad) {
        edad = _edad;
    }

    int getEdad() {
        return edad;
    }

    void setOcupacion(string _ocupacion) {
        ocupacion = _ocupacion;
    }

    string getOcupacion() {
        return ocupacion;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Ocupación: " << ocupacion << endl;
    }
};

class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    Estudiante() : Persona() {
        numeroEstudiante = 0;
        promedioCalificaciones = 0.0f;
    }

    Estudiante(string _nombre, int _edad, string _ocupacion, int _numeroEstudiante, float _promedioCalificaciones) : 
        Persona(_nombre, _edad, _ocupacion) {
        numeroEstudiante = _numeroEstudiante;
        promedioCalificaciones = _promedioCalificaciones;
    }

    void setNumeroEstudiante(int _numeroEstudiante) {
        numeroEstudiante = _numeroEstudiante;
    }

    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    void setPromedioCalificaciones(float _promedioCalificaciones) {
        promedioCalificaciones = _promedioCalificaciones;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }

    void mostrarInformacion() {
        Persona::mostrarInformacion();
        cout << "Número de estudiante: " << numeroEstudiante << endl;
        cout << "Promedio de calificaciones: " << promedioCalificaciones << endl;
    }
};

int main() {
    char opcion;

    do {
        cout << "\n1. Mostrar información de Persona" << endl;
        cout << "2. Mostrar información de Estudiante" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case '1': {
                cin.ignore();
                string nombre, ocupacion;
                int edad;

                cout << "Ingrese el nombre: ";
                getline(cin, nombre);

                cout << "Ingrese la edad: ";
                cin >> edad;

                cin.ignore();
                cout << "Ingrese la ocupación: ";
                getline(cin, ocupacion);

                Persona persona(nombre, edad, ocupacion);
                cout << "\nInformación de la Persona:" << endl;
                persona.mostrarInformacion();
                break;
            }
            case '2': {
                cin.ignore();
                string nombre, ocupacion;
                int edad, numeroEstudiante;
                float promedioCalificaciones;

                cout << "Ingrese el nombre: ";
                getline(cin, nombre);

                cout << "Ingrese la edad: ";
                cin >> edad;

                cin.ignore();
                cout << "Ingrese la ocupación: ";
                getline(cin, ocupacion);

                cout << "Ingrese el número de estudiante: ";
                cin >> numeroEstudiante;

                cout << "Ingrese el promedio de calificaciones: ";
                cin >> promedioCalificaciones;

                Estudiante estudiante(nombre, edad, ocupacion, numeroEstudiante, promedioCalificaciones);
                cout << "\nInformación del Estudiante:" << endl;
                estudiante.mostrarInformacion();
                break;
            }
            case '3':
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese una opción válida." << endl;
        }
    } while (opcion != '3');

    return 0;
}
