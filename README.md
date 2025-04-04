# Documentación del Programa en C++

## Descripción
Este programa en C++ implementa un menú interactivo que permite al usuario ejecutar diversas funciones matemáticas y lógicas. Cada opción en el menú ejecuta una función específica que realiza un cálculo o evaluación basada en la entrada del usuario.

## Estructura del Programa
El programa está estructurado de la siguiente manera:
- Declaración de funciones.
- Implementación de funciones.
- Menú interactivo en `main()`.

## Tipos:

# Índice de Funciones
# Operaciones con Números

Evaluar Número
Evaluar Paridad
Determinar Mayor
Determinar Menor
Última Cifra de un Número
Calcular Factorial
Número en Romano

# Bucles y Secuencias

Imprimir Números de 100 a -2
Imprimir Números Pares del 1 al 100
Calcular Números Hasta N
Sumar Números Hasta N

# Sumas y Promedios

Calcular Promedio de Notas
Sumar 20 a 50
Sumar 15 Números
Sumar Números Pares
Sumar Números Impares
Promedio de Edades

# Conteo y Estadísticas

Contar Múltiplos de 2 y 3
Contar Números Impares
Mayor y Menor de 5 Números

# Ordenamiento

Ordenar 3 Números de Mayor a Menor
Ordenar 3 Números de Menor a Mayor

# Geometría y Matemáticas

Calcular Área y Volumen de Cilindro
Calcular Residuos de División
Hipotenusa
Círculo
Esfera
Evaluar Función

# Conversiones

Convertir Velocidad
Convertir Centímetros a Pulgadas
Convertir Minutos a Horas
Fahrenheit a Celsius
Celsius a Fahrenheit
Convertir Moneda
Libras a Kilos

# Datos Personales y Clasificación

Verificar Mayor de Edad
Mostrar Mes
Signo Zodiacal

# Notas y Calificaciones

Nota Final 1
Nota Final 2

Procesamiento de Datos


## Funciones Implementadas

# Resumen Rápido: Métodos en C++

## Métodos para evaluación de números

**`evaluarNumero()`**
- Entrada: un número
- Compara con 0 usando if-else
- Salida: indica si es positivo, negativo o cero

**`evaluarParidad()`**
- Entrada: un número
- Verifica residuo de división por 2
- Salida: indica si es par o impar

**`determinarMayor()`**
- Entrada: dos números
- Compara usando if-else
- Salida: muestra el mayor o si son iguales

**`determinarMenor()`**
- Entrada: dos números
- Compara usando if-else
- Salida: muestra el menor o si son iguales

## Métodos de bucles y conteo

**`imprimirNumeros100aMenos2()`**
- Bucle for decreciente desde 100 hasta -2
- Imprime cada número en la secuencia

**`imprimirNumerosPares1a100()`**
- Bucle for con incremento de 2 desde 2 hasta 100
- Imprime cada número par

**`contarMultiplos2y3()`**
- Inicializa contadores a 0
- Bucle for desde 1 hasta 100
- Incrementa contadores verificando residuos
- Muestra resultados finales

**`contarNumerosImpares()`**
- Inicializa contador a 0
- Bucle for desde 1 hasta 100
- Incrementa contador cuando residuo no es 0
- Muestra total de impares

## Métodos de cálculo y suma

**`calcularPromedioNotas()`**
- Inicializa suma y contador a 0
- Bucle do-while para entrada de notas
- Acumula valores positivos
- Calcula promedio (suma/contador)

**`sumar20a50()`**
- Inicializa suma a 0
- Bucle for desde 20 hasta 50
- Acumula cada valor
- Muestra la suma total

**`sumar15Numeros()`**
- Inicializa suma a 0
- Bucle for para leer 15 números
- Acumula cada valor ingresado
- Muestra suma total

**`sumarNumerosPares()`**
- Inicializa suma a 0
- Bucle for desde 1 hasta 100
- Acumula solo si residuo por 2 es 0
- Muestra suma total

**`sumarNumerosImpares()`**
- Inicializa suma a 0
- Bucle for desde 1 hasta 100
- Acumula solo si residuo por 2 no es 0
- Muestra suma total

## Métodos de ordenamiento

**`ordenar3NumerosMayorAMenor()`**
- Entrada: tres números
- Compara todos los casos posibles
- Salida: números ordenados de mayor a menor

**`ordenar3NumerosMenorAMayor()`**
- Entrada: tres números
- Compara todos los casos posibles
- Salida: números ordenados de menor a mayor

## Métodos para operaciones matemáticas

**`calcularAreaVolumenCilindro()`**
- Entrada: radio y altura
- Aplica fórmulas con constante PI
- Salida: área y volumen calculados

**`calcularFactorial()`**
- Entrada: un número
- Inicializa factorial en 1
- Bucle for multiplicando desde 1 hasta n
- Salida: factorial calculado

**`hipotenusa()`**
- Entrada: dos catetos
- Calcula usando teorema de Pitágoras
- Salida: valor de la hipotenusa

**`circulo()`**
- Entrada: radio
- Calcula perímetro (2πr)
- Calcula área (πr²)
- Muestra resultados

## Métodos de conversión

**`convertirVelocidad()`**
- Entrada: velocidad en km/h
- Multiplica por 1000/3600
- Salida: velocidad en m/s

**`convertirCentimetrosAPulgadas()`**
- Entrada: medida en cm
- Divide por 2.54
- Salida: medida en pulgadas

**`convertirMinutosAHoras()`**
- Entrada: minutos totales
- Divide entre 60 para horas (enteras)
- Calcula residuo para minutos
- Salida: formato horas y minutos

**`fahrenheitToCelsius()`**
- Entrada: temperatura °F
- Aplica fórmula (F-32)*5/9
- Salida: temperatura en °C

**`celsiusToFahrenheit()`**
- Entrada: temperatura °C
- Aplica fórmula (C*9/5)+32
- Salida: temperatura en °F

**`convertirMoneda()`**
- Entrada: opción de conversión y cantidad
- Define tasas de cambio como constantes
- Switch para seleccionar conversión
- Aplica cálculo según selección
- Salida: cantidad convertida

## Métodos para procesamiento específico

**`numeroEnRomano()`**
- Entrada: número entre 1-10
- Switch para cada caso
- Salida: representación romana (I-X)

**`ultimaCifraNumero()`**
- Entrada: un número
- Calcula valor absoluto y residuo por 10
- Salida: último dígito

**`mostrarMes()`**
- Entrada: número entre 1-12
- Switch para cada caso
- Salida: nombre del mes correspondiente

**`signoZodiacal()`**
- Entrada: día y mes
- Serie de condiciones para rangos de fechas
- Salida: signo zodiacal correspondiente

**`calcularNumerosHastaN()`**
- Entrada: número n
- Bucle for desde 1 hasta n
- Imprime cada número

**`sumarNumerosHastaN()`**
- Entrada: número n
- Bucle for desde 1 hasta n
- Acumula suma
- Salida: suma total

**`calcularResiduosDivision()`**
- Entrada: dividendo y divisor
- Verifica que divisor no sea cero
- Calcula residuo con operador %
- Salida: valor del residuo

## Métodos para cálculo de notas

**`notaFinal1()`**
- Entrada: tres notas
- Aplica ponderación (30%, 30%, 40%)
- Salida: nota final calculada

**`notaFinal2()`**
- Entrada: cuatro notas
- Aplica ponderación (20%, 20%, 10%, 50%)
- Salida: nota final calculada

## Métodos para estadísticas

**`mayorMenorDe5Numeros()`**
- Entrada: cinco números
- Inicializa mayor y menor con primer valor
- Actualiza en cada iteración si corresponde
- Salida: mayor y menor valores

**`mostrarPositivos()`**
- Entrada: diez números
- Bucle for para leer valores
- Imprime solo los positivos

**`encuestaColores()`**
- Inicializa contadores para cada color
- Bucle for para 10 entradas (1=rojo, 2=verde, 3=azul)
- Incrementa contador según selección
- Salida: porcentajes de cada color

**`compararSexo()`**
- Entrada: n personas con sexo y puntaje
- Acumula totales separados por sexo
- Calcula promedios dividiendo totales entre contadores
- Salida: promedio de hombres y mujeres

**`sueldoEmpleado()`**
- Entrada: categoría (A,B,C) y horas
- Switch para determinar tarifa por categoría
- Calcula sueldo (tarifa * horas)
- Salida: sueldo mensual

**`registroPeaje()`**
- Inicializa contadores para tipos de vehículos
- Bucle while hasta input 0
- Acumula contadores y pasajeros según tipo
- Calcula promedios
- Salida: estadísticas finales

## Funcionamiento del Menú
El menú principal permite al usuario seleccionar la función a ejecutar mediante la entrada de un número correspondiente a la opción deseada. Si se ingresa `0`, el programa termina la ejecución.

## Cómo Ejecutar el Programa
1. Compilar el código fuente con un compilador C++ compatible, como `g++`:
   ```sh
   g++ programa.cpp -o programa
   ```
2. Ejecutar el programa compilado:
   ```sh
   ./programa
   ```
3. Seguir las instrucciones en pantalla y seleccionar las opciones deseadas.

## Notas Adicionales
- El programa maneja validaciones básicas de entrada.
- Se pueden agregar más funciones al menú si es necesario.
- El código puede optimizarse utilizando estructuras de datos más avanzadas si se requiere.
