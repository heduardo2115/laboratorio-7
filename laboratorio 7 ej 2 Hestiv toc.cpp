#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
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

int main() {
    Persona persona1("hestiv",19 , "Ingeniero");
    Persona persona2;
    persona1.mostrarInformacion();
    cout << endl;
    persona2.setNombre("rubi");
    persona2.setEdad(30);
    persona2.setOcupacion("abogada");
    persona2.mostrarInformacion();
    return 0;
}
