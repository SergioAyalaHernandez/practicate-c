#include <iostream>
#include <cmath>
using namespace std;

void evaluarNumero() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    }
    else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    }
    else {
        cout << "El numero es cero." << endl;
    }
}