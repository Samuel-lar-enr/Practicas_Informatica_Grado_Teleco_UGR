/*Suponga que I y J son variables enteras cuyos valores son 6 y 12 respectivamente. ¿Cu´ales de las siguientes
condiciones son verdaderas?
a) (2 ∗ I) <= J
b) (2 ∗ I − 1) < J
c) (I > 0) && (I <= 10)
d ) (I > 25) || (I < 50) && (J < 50)
e) (I < 4) || (J > 5)
f ) !(I > 6)*/

#include <stdio.h>

int main(){
    const int I = 6;
    const int J = 12;
    bool condicion;

    condicion= (2 * I) <= J;
    printf("La condicion (2 * I) <= J es %d (1/0)\n", condicion);

    condicion= (2 * I - 1) < J;
    printf("La condicion (2 * I - 1) < J es %d (1/0)\n", condicion);

    condicion= (I > 0) && (I <= 10);
    printf("La condicion (I > 0) && (I <= 10) es %d (1/0)\n", condicion);

    condicion= (I > 25) || (I < 50) && (J < 50);
    printf("La condicion (I > 25) || (I < 50) && (J < 50) es %d (1/0)\n", condicion);

    condicion= (I < 4) || (J > 5);
    printf("La condicion (I < 4) || (J > 5) es %d (1/0)\n", condicion);

    condicion= !(I > 6);
    printf("La condicion !(I > 6) es %d (1/0)\n", condicion);

    return 0;
}