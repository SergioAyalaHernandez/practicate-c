#include <iostream>
#include <cmath>
using namespace std;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void evaluarNumero();
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
void convertirVelocidad();
void contarNumerosImpares();
void sumarNumerosImpares();
void sumarNumerosPares();
void mayorMenorDe5Numeros();
void calcularFactorial();
void numeroEnRomano();
void ultimaCifraNumero();
void convertirCentimetrosAPulgadas();
void convertirMinutosAHoras();
void mostrarMes();
void signoZodiacal();
void calcularNumerosHastaN();
void sumarNumerosHastaN();
void calcularResiduosDivision();
void circulo();
void esfera();
void hipotenusa();
void fahrenheitToCelsius();
void celsiusToFahrenheit();
void notaFinal1();
void notaFinal2();
void evaluarFuncion();
void promedioEdades();
void mostrarPositivos();
void encuestaColores();
void compararSexo();
void convertirMoneda();
void librasAKilos();
void sueldoEmpleado();
void registroPeaje();

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
        cout << "15. Convertir velocidad" << endl;
        cout << "16. Contar numeros impares" << endl;
        cout << "17. Sumar numeros impares" << endl;
        cout << "18. Sumar numeros pares" << endl;
        cout << "19. Mayor y menor de 5 numeros" << endl;
        cout << "20. Calcular factorial" << endl;
        cout << "21. Numero en romano" << endl;
        cout << "22. Obtener ultima cifra de un numero" << endl;
        cout << "23. Convertir centimetros a pulgadas" << endl;
        cout << "24. Convertir minutos a horas" << endl;
        cout << "25. Mostrar mes" << endl;
        cout << "26. Signo zodiacal" << endl;
        cout << "27. Contar numeros hasta N" << endl;
        cout << "28. Sumar numeros hasta N" << endl;
        cout << "29. Calcular residuos de division" << endl;
        cout << "30. Circulo" << endl;
        cout << "31. Esfera" << endl;
        cout << "32. Hipotenusa" << endl;
        cout << "33. Fahrenheit a Celsius" << endl;
        cout << "34. Celsius a Fahrenheit" << endl;
        cout << "35. Nota final (3 notas)" << endl;
        cout << "36. Nota final (4 notas)" << endl;
        cout << "37. Evaluar funcion" << endl;
        cout << "38. Promedio de edades" << endl;
        cout << "39. Mostrar positivos" << endl;
        cout << "40. Encuesta de colores" << endl;
        cout << "41. Comparar sexo" << endl;
        cout << "42. Convertir moneda" << endl;
        cout << "43. Libras a kilos" << endl;
        cout << "44. Sueldo empleado" << endl;
        cout << "45. Peajse" << endl;
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
        case 15: convertirVelocidad(); break;
        case 16: contarNumerosImpares(); break;
        case 17: sumarNumerosImpares(); break;
        case 18: sumarNumerosPares(); break;
        case 19: mayorMenorDe5Numeros(); break;
        case 20: calcularFactorial(); break;
        case 21: numeroEnRomano(); break;
        case 22: ultimaCifraNumero(); break;
        case 23: convertirCentimetrosAPulgadas(); break;
        case 24: convertirMinutosAHoras(); break;
        case 25: mostrarMes(); break;
        case 26: signoZodiacal(); break;
        case 27: calcularNumerosHastaN(); break;
        case 28: sumarNumerosHastaN(); break;
        case 29: calcularResiduosDivision(); break;
        case 30: circulo(); break;
        case 31: esfera(); break;
        case 32: hipotenusa(); break;
        case 33: fahrenheitToCelsius(); break;
        case 34: celsiusToFahrenheit(); break;
        case 35: notaFinal1(); break;
        case 36: notaFinal2(); break;
        case 37: evaluarFuncion(); break;
        case 38: promedioEdades(); break;
        case 39: mostrarPositivos(); break;
        case 40: encuestaColores(); break;
        case 41: compararSexo(); break;
        case 42: convertirMoneda(); break;
        case 43: librasAKilos(); break;
        case 44: sueldoEmpleado(); break;
        case 45: registroPeaje(); break;
        case 0: cout << "Saliendo..." << endl; break;
        default: cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 0);
    return 0;
}

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

void convertirVelocidad() {
    double kmh, ms;
    cout << "Ingrese la velocidad en km/h: ";
    cin >> kmh;
    ms = kmh * 1000 / 3600;
    cout << "La velocidad en m/s es: " << ms << endl;
}
void contarNumerosImpares() {
    int contador = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            contador++;
        }
    }
    cout << "Cantidad de numeros impares entre 1 y 100: " << contador << endl;
}
void sumarNumerosImpares() {
    int suma = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
    }
    cout << "La suma de los numeros impares entre 1 y 100 es: " << suma << endl;
}
void sumarNumerosPares() {
    int suma = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }
    cout << "La suma de los numeros pares entre 1 y 100 es: " << suma << endl;
}
void mayorMenorDe5Numeros() {
    int num, mayor, menor;
    cout << "Ingrese 5 numeros:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Numero " << i << ": ";
        cin >> num;
        if (i == 1) {
            mayor = menor = num;
        }
        else {
            if (num > mayor) {
                mayor = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;
}
void calcularFactorial() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    long long factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << "El factorial de " << num << " es: " << factorial << endl;
}
void numeroEnRomano() {
    int num;
    cout << "Ingrese un numero entre 1 y 10: ";
    cin >> num;
    switch (num) {
    case 1: cout << "I" << endl; break;
    case 2: cout << "II" << endl; break;
    case 3: cout << "III" << endl; break;
    case 4: cout << "IV" << endl; break;
    case 5: cout << "V" << endl; break;
    case 6: cout << "VI" << endl; break;
    case 7: cout << "VII" << endl; break;
    case 8: cout << "VIII" << endl; break;
    case 9: cout << "IX" << endl; break;
    case 10: cout << "X" << endl; break;
    default: cout << "Numero fuera de rango." << endl; break;
    }
}
void ultimaCifraNumero() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "La ultima cifra es: " << abs(num) % 10 << endl;
}
void convertirCentimetrosAPulgadas() {
    double cm, pulgadas;
    cout << "Ingrese la medida en centimetros: ";
    cin >> cm;
    pulgadas = cm / 2.54;
    cout << "La medida en pulgadas es: " << pulgadas << endl;
}
void convertirMinutosAHoras() {
    int minutos;
    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;
    int horas = minutos / 60;
    minutos = minutos % 60;
    cout << "La conversion es: " << horas << " horas y " << minutos << " minutos." << endl;
}
void mostrarMes() {
    int mes;
    cout << "Ingrese el numero del mes (1-12): ";
    cin >> mes;
    switch (mes) {
    case 1: cout << "Enero" << endl; break;
    case 2: cout << "Febrero" << endl; break;
    case 3: cout << "Marzo" << endl; break;
    case 4: cout << "Abril" << endl; break;
    case 5: cout << "Mayo" << endl; break;
    case 6: cout << "Junio" << endl; break;
    case 7: cout << "Julio" << endl; break;
    case 8: cout << "Agosto" << endl; break;
    case 9: cout << "Septiembre" << endl; break;
    case 10: cout << "Octubre" << endl; break;
    case 11: cout << "Noviembre" << endl; break;
    case 12: cout << "Diciembre" << endl; break;
    default: cout << "Mes invalido." << endl; break;
    }
}
void signoZodiacal() {
    int dia, mes;
    cout << "Ingrese el dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mes;

    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        cout << "Acuario" << endl;
    }
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        cout << "Piscis" << endl;
    }
    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        cout << "Aries" << endl;
    }
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        cout << "Tauro" << endl;
    }
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        cout << "Geminis" << endl;
    }
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        cout << "Cancer" << endl;
    }
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        cout << "Leo" << endl;
    }
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        cout << "Virgo" << endl;
    }
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        cout << "Libra" << endl;
    }
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        cout << "Escorpio" << endl;
    }
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        cout << "Sagitario" << endl;
    }
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        cout << "Capricornio" << endl;
    }
    else {
        cout << "Fecha invalida." << endl;
    }
}
void calcularNumerosHastaN() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}
void sumarNumerosHastaN() {
    int n, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    cout << "La suma de los numeros hasta " << n << " es: " << suma << endl;
}
void calcularResiduosDivision() {
    int dividendo, divisor;
    cout << "Ingrese el dividendo: ";
    cin >> dividendo;
    cout << "Ingrese el divisor: ";
    cin >> divisor;
    if (divisor != 0) {
        int residuo = dividendo % divisor;
        cout << "El residuo de la division es: " << residuo << endl;
    }
    else {
        cout << "Error: Division por cero." << endl;
    }
}

void circulo() {
    double radio;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    cout << "Perímetro: " << (2 * M_PI * radio) << endl;
    cout << "Área: " << (M_PI * pow(radio, 2)) << endl;
}

void esfera() {
    double radio;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    cout << "Volumen: " << ((4.0 / 3.0) * M_PI * pow(radio, 3)) << endl;
}

void hipotenusa() {
    double a, b;
    cout << "Ingrese el cateto a: ";
    cin >> a;
    cout << "Ingrese el cateto b: ";
    cin >> b;
    cout << "Hipotenusa: " << sqrt(pow(a, 2) + pow(b, 2)) << endl;
}

void fahrenheitToCelsius() {
    double f;
    cout << "Ingrese la temperatura en Fahrenheit: ";
    cin >> f;
    cout << "Celsius: " << ((f - 32) * 5 / 9) << endl;
}

void celsiusToFahrenheit() {
    double c;
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> c;
    cout << "Fahrenheit: " << ((c * 9 / 5) + 32) << endl;
}

void notaFinal1() {
    double n1, n2, n3;
    cout << "Ingrese las tres notas: ";
    cout << "Ingrese la nota 1: ";
    cin >> n1 ;
    cout << "Ingrese la nota 2: ";
    cin >> n2;
    cout << "Ingrese la nota 3: ";
    cin >> n3;
    cout << "Nota final: " << ((n1 * 0.3) + (n2 * 0.3) + (n3 * 0.4)) << endl;
}

void notaFinal2() {
    double n1, n2, n3, n4;
    cout << "Ingrese las cuatro notas: ";
    cin >> n1 >> n2 >> n3 >> n4;
    cout << "Nota final: " << ((n1 * 0.2) + (n2 * 0.2) + (n3 * 0.1) + (n4 * 0.5)) << endl;
}

void evaluarFuncion() {
    for (int x = -5; x <= 20; x++) {
        cout << "Para x = " << x << ", y = " << ((5.0 / 3.0) * x + (3.0 / 2.0) * x + 8) << endl;
    }
}

void promedioEdades() {
    double e1, e2, e3;
    cout << "Ingrese tres edades: ";
    cin >> e1 >> e2 >> e3;
    cout << "Promedio de edades: " << ((e1 + e2 + e3) / 3) << endl;
}

void mostrarPositivos() {
    int num;
    cout << "Ingrese 10 números: ";
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num > 0) cout << num << " ";
    }
    cout << endl;
}

void encuestaColores() {
    int rojo = 0, verde = 0, azul = 0, color;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese 1 para rojo, 2 para verde, 3 para azul: ";
        cin >> color;
        if (color == 1) rojo++;
        else if (color == 2) verde++;
        else if (color == 3) azul++;
    }
    cout << "Rojo: " << (rojo * 10) << "%, Verde: " << (verde * 10) << "%, Azul: " << (azul * 10) << "%" << endl;
}

void compararSexo() {
    int hombres = 0, mujeres = 0, sexo;
    double puntaje, totalH = 0, totalM = 0;
    cout << "Ingrese número de personas: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese 1 para hombre, 2 para mujer: ";
        cin >> sexo;
        cout << "Ingrese puntaje: ";
        cin >> puntaje;
        if (sexo == 1) { totalH += puntaje; hombres++; }
        else if (sexo == 2) { totalM += puntaje; mujeres++; }
    }
    cout << "Promedio hombres: " << (hombres ? totalH / hombres : 0) << ", Promedio mujeres: " << (mujeres ? totalM / mujeres : 0) << endl;
}

void convertirMoneda() {
    int opcion;
    double cantidad, resultado;
    const double TASA_PESO_DOLAR = 0.00024;  
    const double TASA_DOLAR_PESO = 4167.00; 
    const double TASA_EURO_DOLAR = 1.09;
    const double TASA_DOLAR_EURO = 0.92;

    cout << "Seleccione la conversión:\n";
    cout << "1. Pesos a Dólares\n";
    cout << "2. Dólares a Pesos\n";
    cout << "3. Euros a Dólares\n";
    cout << "4. Dólares a Euros\n";
    cout << "Ingrese su opción: ";
    cin >> opcion;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    switch (opcion) {
    case 1:
        resultado = cantidad * TASA_PESO_DOLAR;
        cout << "Resultado: " << resultado << " USD" << endl;
        break;
    case 2:
        resultado = cantidad * TASA_DOLAR_PESO;
        cout << "Resultado: " << resultado << " COP" << endl;
        break;
    case 3:
        resultado = cantidad * TASA_EURO_DOLAR;
        cout << "Resultado: " << resultado << " USD" << endl;
        break;
    case 4:
        resultado = cantidad * TASA_DOLAR_EURO;
        cout << "Resultado: " << resultado << " EUR" << endl;
        break;
    default:
        cout << "Opción no válida" << endl;
    }
}


void librasAKilos() {
    double libras;
    cout << "Ingrese la cantidad en libras: ";
    cin >> libras;
    cout << "Kilogramos: " << (libras * 0.453592) << endl;
}

void sueldoEmpleado() {
    char categoria;
    int horas;
    cout << "Ingrese la categoría (A, B, C): ";
    cin >> categoria;
    cout << "las horas trabajadas: ";
    cin >> horas;
    double tarifa;
    switch (categoria) {
    case 'A': tarifa = 26.90; break;
    case 'B': tarifa = 24.30; break;
    case 'C': tarifa = 21.50; break;
    default: cout << "Categoría no válida"; return;
    }
    cout << "Sueldo mensual: " << (tarifa * horas) << endl;
}


void registroPeaje() {
    int tipoVehiculo, pasajeros;
    int totalCarros = 0, totalBuses = 0, totalOtros = 0;
    int pasajerosCarro = 0, pasajerosBus = 0;

    while (true) {
        cout << "Ingrese el tipo de vehículo (1: Carro, 2: Bus, 3: Otro, 0: Salir): ";
        cin >> tipoVehiculo;
        if (tipoVehiculo == 0) break;

        cout << "Ingrese el número de pasajeros: ";
        cin >> pasajeros;

        switch (tipoVehiculo) {
        case 1:
            totalCarros++;
            pasajerosCarro += pasajeros;
            break;
        case 2:
            totalBuses++;
            pasajerosBus += pasajeros;
            break;
        case 3:
            totalOtros++;
            break;
        default:
            cout << "Tipo de vehículo no válido." << endl;
        }
    }

    double promedioCarros = totalCarros ? (double)pasajerosCarro / totalCarros : 0;
    double promedioBuses = totalBuses ? (double)pasajerosBus / totalBuses : 0;

    cout << "Total de carros particulares: " << totalCarros << endl;
    cout << "Total de buses: " << totalBuses << endl;
    cout << "Total de otros vehículos: " << totalOtros << endl;
    cout << "Promedio de pasajeros en carros particulares: " << promedioCarros << endl;
    cout << "Promedio de pasajeros en buses: " << promedioBuses << endl;
}
