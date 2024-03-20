// Pacheco Refugio Alan Ivan | Paradigmas de programacion | Ejercicio dde laboratorio 3 

#include <stdio.h>
#include <math.h>
#include <time.h>

// Función para realizar la suma
double suma(double a, double b) {
    return a + b;
}

// Función para realizar la resta
double resta(double a, double b) {
    return a - b;
}

// Función para realizar la multiplicación
double multiplicacion(double a, double b) {
    return a * b;
}

// Función para realizar la división
double division(double a, double b) {
    return a / b;
}

// Función para calcular el módulo
double modulo(double a, double b) {
    return fmod(a, b);
}

// Función para calcular el factorial
double factorial(double num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Función para calcular el porcentaje
double porcentaje(double num, double porc) {
    return (num * porc) / 100.0;
}

// Función para calcular la raíz cuadrada
double raizCuadrada(double num) {
    return sqrt(num);
}

// Función para calcular el cuadrado
double cuadrado(double num) {
    return num * num;
}

// Función para calcular el logaritmo
double logaritmo(double num) {
    return log10(num);
}

// main principal

int main() {
    int opcion;
    double num1, num2, resultado;

    do {													// do while para poder regresar una vez terminada la funcionx
        printf("\n\n---------- Calculadora ----------\n");
        printf("1) Suma\n");
        printf("2) Resta\n");
        printf("3) Multiplicacion\n");
        printf("4) Division\n");
        printf("5) Modulo\n");
        printf("6) Factorial\n");
        printf("7) Porcentaje\n");
        printf("8) Raiz Cuadrada\n");
        printf("9) Cuadrado\n");
        printf("10) Logaritmo\n");
        printf("11) Salir\n");
        printf("Ingrese la opcion que desea realizar: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese dos numeros para sumar: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = suma(num1, num2);
                printf("La suma es: %.2lf\n", resultado);
                break;
            case 2:
                printf("Ingrese dos numeros para restar: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = resta(num1, num2);
                printf("La resta es: %.2lf\n", resultado);
                break;
            case 3:
                printf("Ingrese dos numeros para multiplicar: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = multiplicacion(num1, num2);
                printf("La multiplicacion es: %.2lf\n", resultado);
                break;
            case 4:
                printf("Ingrese dos numeros para dividir: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = division(num1, num2);
                printf("La division es: %.2lf\n", resultado);
                break;
            case 5:
                printf("Ingrese dos numeros para calcular el modulo: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = modulo(num1, num2);
                printf("El modulo es: %.2lf\n", resultado);
                break;
            case 6:
                printf("Ingrese un numero para calcular el factorial: ");
                scanf("%lf", &num1);
                resultado = factorial(num1);
                printf("El factorial es: %.2lf\n", resultado);
                break;
            case 7:
                printf("Ingrese un numero y el porcentaje: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = porcentaje(num1, num2);
                printf("El porcentaje es: %.2lf\n", resultado);
                break;
            case 8:
                printf("Ingrese un numero para calcular la raiz cuadrada: ");
                scanf("%lf", &num1);
                resultado = raizCuadrada(num1);
                printf("La raiz cuadrada es: %.2lf\n", resultado);
                break;
            case 9:
                printf("Ingrese un numero para calcular el cuadrado: ");
                scanf("%lf", &num1);
                resultado = cuadrado(num1);
                printf("El cuadrado es: %.2lf\n", resultado);
                break;
            case 10:
                printf("Ingrese un numero para calcular el logaritmo: ");
                scanf("%lf", &num1);
                resultado = logaritmo(num1);
                printf("El logaritmo es: %.2lf\n", resultado);
                break;
            case 11:
                printf("Saliendo de la calculadora...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, seleccione una opcion correcta.\n");
        }

    } while (opcion != 11);

    return 0;
}
