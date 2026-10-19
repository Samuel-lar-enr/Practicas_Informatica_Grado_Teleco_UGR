/*Suponga que I y J son variables enteras cuyos valores son 6 y 12 respectivamente. ¿Cuáles de las siguientes
condiciones son verdaderas?*/
#include <stdio.h>
#include <stdbool.h>

const int I = 6;
const int J = 12;

int main() {
    bool condicion;

    // a) (2 * I) <= J
    condicion = (2 * I) <= J;
    printf("a) %d\n", condicion);

    // b) (2 * I - 1) < J
    condicion = (2 * I - 1) < J;
    printf("b) %d\n", condicion);

    // c) (I > 0) && (I <= 10)
    condicion = (I > 0) && (I <= 10);
    printf("c) %d\n", condicion);

    // d) (I > 25) || (I < 50) && (J < 50)
    condicion = (I > 25) || (I < 50) && (J < 50);
    printf("d) %d\n", condicion);

    // e) (I < 4) || (J > 5)
    condicion = (I < 4) || (J > 5);
    printf("e) %d\n", condicion);

    // f) !(I > 6)
    condicion = !(I > 6);
    printf("f) %d\n", condicion);

    return 0;
}