/* Hacer un programa que pida dos valores, uno de corriente y otro de tensión,
   y calcule usando la ley de Ohm la resistencia. */

#include <stdio.h>

int main() {
    float corriente;
    float tension;
    float resistencia;

    printf("EJERCICIO 1: CALCULO RESISTENCIA\n\n");

    printf("Inserte el valor de la corriente: ");
    scanf("%f", &corriente);

    printf("Inserte el valor de la tension: ");
    scanf("%f", &tension);

    resistencia = tension / corriente;

    printf("La resistencia es: %0.2f ohms\n", resistencia);

    return 0;
}