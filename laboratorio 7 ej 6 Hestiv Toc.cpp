#include <iostream>
#include <vector>
#include <string>
using namespace std;
void ordenarNombres(vector<string>& nombres) {
    int n = nombres.size();
    bool intercambiado;

    for (int i = 0; i < n - 1; ++i) {
        intercambiado = false;
        
        for (int j = 0; j < n - i - 1; ++j) {
            if (nombres[j] > nombres[j + 1]) {
                swap(nombres[j], nombres[j + 1]);
                intercambiado = true;
            }
        }

        if (!intercambiado) 
            break;
    }
}
int main() {
    vector<string> nombres = {"Hestiv", "Rufus", "Diana", "Carlos", "Karen"};

    cout << "Nombres antes de ordenar:" << endl;
    for (const string& nombre : nombres) {
        cout << nombre << endl;
    }

    ordenarNombres(nombres);

    cout << "\nNombres ordenados:" << endl;
    for (const string& nombre : nombres) {
        cout << nombre << endl;
    }
    return 0;
}
