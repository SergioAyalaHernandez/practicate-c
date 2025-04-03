#include <iostream>
#include <cmath>
#include "evaluarNumero.cpp"

using namespace std;

void evaluarParidad();
void imprimirNumeros100aMenos2();
void imprimirNumerosPares1a100();
void calcularPromedioNotas();
void contarMultiplos2y3();
void determinarMayor();
void determinarMenor();
void sumar20a50();
void sumar15Numeros();
void verificarMayorEdad();
void ordenar3NumerosMayorAMenor();
void ordenar3NumerosMenorAMayor();
void calcularAreaVolumenCilindro();
//void convertirVelocidad();
//void contarNumerosImpares();
//void sumarNumerosImpares();
//void sumarNumerosPares();
//void mayorMenorDe5Numeros();
//void calcularFactorial();
//void numeroEnRomano();
//void ultimaCifraNumero();
//void convertirCentimetrosAPulgadas();
//void convertirMinutosAHoras();
//void mostrarMes();
//void signoZodiacal();
//void calcularNumerosHastaN();
//void sumarNumerosHastaN();
//void calcularResiduosDivision();

int main() {
    int opcion;
    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Evaluar numero" << endl;
        cout << "2. Evaluar paridad" << endl;
        cout << "3. Imprimir numeros del 100 al -2" << endl;
        cout << "4. Imprimir numeros pares del 1 al 100" << endl;
        cout << "5. Calcular promedio de notas" << endl;
        cout << "6. Contar multiplos de 2 y 3" << endl;
        cout << "7. Determinar mayor" << endl;
        cout << "8. Determinar menor" << endl;
        cout << "9. Sumar numeros del 20 al 50" << endl;
        cout << "10. Sumar 15 numeros" << endl;
        cout << "11. Verificar mayor de edad" << endl;
        cout << "12. Ordenar 3 numeros (mayor a menor)" << endl;
        cout << "13. Ordenar 3 numeros (menor a mayor)" << endl;
        cout << "14. Calcular area y volumen de un cilindro" << endl;
        //cout << "15. Convertir velocidad" << endl;
        //cout << "16. Contar numeros impares" << endl;
        //cout << "17. Sumar numeros impares" << endl;
        //cout << "18. Sumar numeros pares" << endl;
        //cout << "19. Mayor y menor de 5 numeros" << endl;
        //cout << "20. Calcular factorial" << endl;
        //cout << "21. Numero en romano" << endl;
        //cout << "22. Obtener ultima cifra de un numero" << endl;
        //cout << "23. Convertir centimetros a pulgadas" << endl;
        //cout << "24. Convertir minutos a horas" << endl;
        //cout << "25. Mostrar mes" << endl;
        //cout << "26. Signo zodiacal" << endl;
        //cout << "27. Contar numeros hasta N" << endl;
        //cout << "28. Sumar numeros hasta N" << endl;
        //cout << "29. Calcular residuos de division" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: evaluarNumero(); break;
        case 2: evaluarParidad(); break;
        case 3: imprimirNumeros100aMenos2(); break;
        case 4: imprimirNumerosPares1a100(); break;
        case 5: calcularPromedioNotas(); break;
        case 6: contarMultiplos2y3(); break;
        case 7: determinarMayor(); break;
        case 8: determinarMenor(); break;
        case 9: sumar20a50(); break;
        case 10: sumar15Numeros(); break;
        case 11: verificarMayorEdad(); break;
        case 12: ordenar3NumerosMayorAMenor(); break;
        case 13: ordenar3NumerosMenorAMayor(); break;
        case 14: calcularAreaVolumenCilindro(); break;
            //case 15: convertirVelocidad(); break;
            //case 16: contarNumerosImpares(); break;
            //case 17: sumarNumerosImpares(); break;
            //case 18: sumarNumerosPares(); break;
            //case 19: mayorMenorDe5Numeros(); break;
            //case 20: calcularFactorial(); break;
            //case 21: numeroEnRomano(); break;
            //case 22: ultimaCifraNumero(); break;
            //case 23: convertirCentimetrosAPulgadas(); break;
            //case 24: convertirMinutosAHoras(); break;
            //case 25: mostrarMes(); break;
            //case 26: signoZodiacal(); break;
            //case 27: calcularNumerosHastaN(); break;
            //case 28: sumarNumerosHastaN(); break;
            //case 29: calcularResiduosDivision(); break;
        case 0: cout << "Saliendo..." << endl; break;
        default: cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 0);
    return 0;
}


void evaluarParidad() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "El numero es par." << endl;
    }
    else {
        cout << "El numero es impar." << endl;
    }
}

void imprimirNumeros100aMenos2() {
    for (int i = 100; i >= -2; i--) {
        cout << i << " ";
    }
    cout << endl;
}

void imprimirNumerosPares1a100() {
    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

void calcularPromedioNotas() {
    int suma = 0, nota, contador = 0;
    do {
        cout << "Ingrese una nota (0 para terminar): ";
        cin >> nota;
        if (nota > 0) {
            suma += nota;
            contador++;
        }
    } while (nota != 0);
    if (contador > 0) {
        cout << "El promedio es: " << static_cast<double>(suma) / contador << endl;
    }
    else {
        cout << "No se ingresaron notas." << endl;
    }
}
void contarMultiplos2y3() {
    int contador2 = 0, contador3 = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            contador2++;
        }
        if (i % 3 == 0) {
            contador3++;
        }
    }
    cout << "Cantidad de multiplos de 2: " << contador2 << endl;
    cout << "Cantidad de multiplos de 3: " << contador3 << endl;
}

void determinarMayor() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    if (num1 > num2) {
        cout << "El mayor es: " << num1 << endl;
    }
    else if (num2 > num1) {
        cout << "El mayor es: " << num2 << endl;
    }
    else {
        cout << "Los numeros son iguales." << endl;
    }
}
void determinarMenor() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    if (num1 < num2) {
        cout << "El menor es: " << num1 << endl;
    }
    else if (num2 < num1) {
        cout << "El menor es: " << num2 << endl;
    }
    else {
        cout << "Los numeros son iguales." << endl;
    }
}

void sumar20a50() {
    int suma = 0;
    for (int i = 20; i <= 50; i++) {
        suma += i;
    }
    cout << "La suma de los numeros del 20 al 50 es: " << suma << endl;
}
void sumar15Numeros() {
    int suma = 0, numero;
    for (int i = 1; i <= 15; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        suma += numero;
    }
    cout << "La suma de los 15 numeros es: " << suma << endl;
}

void verificarMayorEdad() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad >= 18) {
        cout << "Es mayor de edad." << endl;
    }
    else {
        cout << "Es menor de edad." << endl;
    }
}

void ordenar3NumerosMayorAMenor() {
    int num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "Ordenados de mayor a menor: " << num1 << ", ";
        if (num2 >= num3) {
            cout << num2 << ", " << num3 << endl;
        }
        else {
            cout << num3 << ", " << num2 << endl;
        }
    }
    else if (num2 >= num1 && num2 >= num3) {
        cout << "Ordenados de mayor a menor: " << num2 << ", ";
        if (num1 >= num3) {
            cout << num1 << ", " << num3 << endl;
        }
        else {
            cout << num3 << ", " << num1 << endl;
        }
    }
    else {
        cout << "Ordenados de mayor a menor: " << num3 << ", ";
        if (num1 >= num2) {
            cout << num1 << ", " << num2 << endl;
        }
        else {
            cout << num2 << ", " << num1 << endl;
        }
    }
}
void ordenar3NumerosMenorAMayor() {
    int num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if (num1 <= num2 && num1 <= num3) {
        cout << "Ordenados de menor a mayor: " << num1 << ", ";
        if (num2 <= num3) {
            cout << num2 << ", " << num3 << endl;
        }
        else {
            cout << num3 << ", " << num2 << endl;
        }
    }
    else if (num2 <= num1 && num2 <= num3) {
        cout << "Ordenados de menor a mayor: " << num2 << ", ";
        if (num1 <= num3) {
            cout << num1 << ", " << num3 << endl;
        }
        else {
            cout << num3 << ", " << num1 << endl;
        }
    }
    else {
        cout << "Ordenados de menor a mayor: " << num3 << ", ";
        if (num1 <= num2) {
            cout << num1 << ", " << num2 << endl;
        }
        else {
            cout << num2 << ", " << num1 << endl;
        }
    }
}
void calcularAreaVolumenCilindro() {
    double radio, altura, area, volumen;
    const double PI = 3.14159265358979323846;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    area = 2 * PI * radio * (radio + altura);
    volumen = PI * pow(radio, 2) * altura;

    cout << "El area del cilindro es: " << area << endl;
    cout << "El volumen del cilindro es: " << volumen << endl;
}