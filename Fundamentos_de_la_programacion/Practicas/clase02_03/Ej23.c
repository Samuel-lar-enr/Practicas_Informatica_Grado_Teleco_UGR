/*Realizar un programa para jugar a adivinar un n´umero. El juego tiene que dar pistas de si el n´umero
introducido por el jugador est´a por encima o por debajo del n´umero introducido. La regla de parada ser´a
a) que haya acertado o b) se haya hartado y decida terminar (decidir, en este caso, el modo de interrumpir
el juego).*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero, intento, contador = 0;

    printf("Introduce el numero entero a adivinar (que no sea 0): ");
    scanf("%d", &numero);

    printf("TIP: para terminar pulse 0\n");

    do {
        printf("Que numero sera?: ");
        scanf("%d", &intento);

        contador++;

        if (intento == 0) {
            printf("Te rindes? Eres un fracasado\n");
        } else if (numero > intento) {
            printf("El numero es mayor que este\n");
        } else if (numero < intento) {
            printf("El numero es menor que este\n");
        }

    } while (numero != intento && intento != 0);

    if (intento == numero) {
        printf("Has acertado, felicidades.\n");
        printf("Te ha costado %d intentos", contador);
    }

    return 0;
}