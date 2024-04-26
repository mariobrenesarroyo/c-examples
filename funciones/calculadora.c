#include "calculadora.h"
#include <stdio.h> 
#include <math.h> 

// Función para sumar dos números enteros
int suma(int a, int b) {
    return a + b;
}

// Función para restar dos números enteros
int resta(int a, int b) {
    return a - b;
}

// Función para multiplicar dos números enteros
int multiplicacion(int a, int b) {
    return a * b;
}

// Función para dividir dos números enteros, retorna un número de punto flotante
float division(int a, int b) {
    if (b == 0) {
        printf("Error: división por cero.\n");
        return NAN;  // Retorna Not a Number (NaN) si hay división por cero
    } else {
        return (float)a / b;
    }
}

// Función para determinar si un número es par (retorna 1 si es par, 0 si es impar)
int esPar(int num) {
    return num % 2 == 0;
}

// Función para obtener el módulo de dos números enteros
int modulo(int a, int b) {
    return a % b;
}

// Función para calcular la potencia de un número base a un exponente entero
double potencia(double base, int exponente) {
    return pow(base, exponente);
}



