#include <stdio.h>
#include "calculadora.h"

int main() {
    int num1 = 7, num2 = 5;
    int resultado_suma, resultado_resta, resultado_multiplicacion, resultado_modulo;
    float resultado_division;
    int resultado_esPar;
    double resultado_potencia;

    // Llamado a las funciones y almacenamiento de resultados
    resultado_suma = suma(num1, num2);
    resultado_resta = resta(num1, num2);
    resultado_multiplicacion = multiplicacion(num1, num2);
    resultado_division = division(100, 10);
    resultado_esPar = esPar(num1);
    resultado_modulo = modulo(num1, num2);
    resultado_potencia = potencia(2.0, 3);

    // Muestra de resultados
    printf("suma(%d, %d) -> El resultado de la suma es %d\n", num1, num2, resultado_suma);
    printf("resta(%d, %d) -> El resultado de la resta es %d\n", num1, num2, resultado_resta);
    printf("multiplicacion(%d, %d) -> El resultado de la multiplicación es %d\n", num1, num2, resultado_multiplicacion);
    printf("division(%d, %d) -> El resultado de la división es %.2f\n", 100, 10, resultado_division);
    printf("esPar(%d) -> ", num1);
    if (resultado_esPar) {
        printf("El número %d es par.\n", num1);
    } else {
        printf("El número %d es impar.\n", num1);
    }
    printf("modulo(%d, %d) -> El resultado del módulo es %d\n", num1, num2, resultado_modulo);
    printf("potencia(%lf, %d) -> El resultado de la potencia es %.2lf\n", 2.0, 3, resultado_potencia);

    return 0;
}



