/*Realizar un programa que presente un menú al usuario y que dependiendo de la opción elegida, calcule
(sin usar pow) la funci´on potencia xn siendo x un n´umero real y n un n´umero entero, la funci´on factorial
de un n´umero entero n! o el combinatorio
n!/m!(n−m)! con n,m valores enteros.*/

#include <stdio.h>
#include <math.h>
int main() {
    int n, m, opcion, i;
    int factorial, factm, factnm, resultado;
    float x, potencia;

    printf("1. Calcular potencia\n");
    printf("2. Calcular factorial\n");
    printf("3. Calcular combinatorio\n");

    printf("Ingrese la opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese un numero real: ");
            scanf("%f", &x);
            printf("Ingrese un exponente entero: ");
            scanf("%d", &n);

            potencia = 1;

            for (i = 0; i < n; i++) {
                potencia = potencia * x;
            }
            printf("Potencia: %.2f\n", potencia);
            break;

        case 2:
            printf("Ingrese un numero entero: ");
            scanf("%d", &n);

            factorial = 1;
            
            for (i = n; i >= 1; i--) {
                factorial = factorial * i;
            }

            printf("Factorial de %d: %d\n", n, factorial);
            break;

        case 3:
            printf("Ingrese n: ");
            scanf("%d", &n);
            printf("Ingrese m: ");
            scanf("%d", &m);

            factorial = 1;
            factm = 1;
            factnm = 1;

            for (i = n; i >= 1; i--) {
                factorial = factorial * i;
            }

            for (i = m; i >= 1; i--) {
                factm = factm * i;
            }

            for (i = n - m; i >= 1; i--) {
                factnm = factnm * i;
            }

            resultado = factorial / (factm * factnm);

            printf("Combinatorio: %d\n", resultado);
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}
