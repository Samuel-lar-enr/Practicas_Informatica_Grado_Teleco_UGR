/*Realizar un programa para calcular la suma de los 100 primeros t´erminos de la sucesi´on.
an = (−1)n(n2 − 1)/2n*/

#include <stdio.h>
#include <math.h>
int main(){
    float n;
    float suma = 0;
    for(n=1; n<=100; n++){
        suma+= pow(-1,n)*(pow(n,2)-1)/(2*n);
    }
    printf("La suma de los 100 primeros terminos es: %f\n", suma);
    return 0;
}

