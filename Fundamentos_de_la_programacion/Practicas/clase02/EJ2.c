/*Construir la negaci´on de las condiciones del ejercicio anterior, de manera que el operador de negaci´on s´olo
afecte a condiciones simples.*/

#include <stdio.h>

int main(){
    const int I = 6;
    const int J = 12;
    bool condicion;

    condicion= (2 * I) > J;
    printf("La condicion (2 * I) <= J a (2 * I) > J es %d (1/0)\n", condicion);

    condicion= (2 * I - 1) >= J;
    printf("La condicion (2 * I - 1) < J a (2 * I - 1) >= J es %d (1/0)\n", condicion);

    condicion= (I <= 0) || (I > 10);
    printf("La condicion (I > 0) && (I <= 10) a (I <= 0) || (I > 10) es %d (1/0)\n", condicion);

    condicion= (I <= 25) && (I >= 50) || (J >= 50);
    printf("La condicion (I > 25) || (I < 50) && (J < 50) a (I <= 25) && (I >= 50) || (J >= 50) es %d (1/0)\n", condicion);

    condicion= (I >= 4) && (J <= 5);
    printf("La condicion (I < 4) || (J > 5) a (I >= 4) && (J <= 5) es %d (1/0)\n", condicion);

    condicion= (I < 6);
    printf("La condicion !(I > 6) a (I < 6) es %d (1/0)\n", condicion);

    return 0;
}