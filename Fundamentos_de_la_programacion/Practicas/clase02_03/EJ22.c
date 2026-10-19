/*Desarrollar un programa que determine en un conjunto de 100 n´umeros naturales, cu´antos son menores
de 15, cu´antos mayores que 50 y cu´antos comprendidos entre 16 y 49.*/
#include <stdio.h>

int main() {
    int i, num;
    int menores = 0, mayores = 0, intermedios = 0;

    for (i = 0; i < 100; i++) {
        printf("Introduce un numero natural: ");
        scanf("%d", &num);

        if (num < 15) {
            menores++;
        } else if (num > 50) {
            mayores++;
        } else if (num >= 16 && num <= 49) {
            intermedios++;
        }
    }

    printf("menores de 15: %d\n", menores);
    printf("mayores de 50: %d\n", mayores);
    printf("entre 16 y 49: %d\n", intermedios);

    return 0;
}