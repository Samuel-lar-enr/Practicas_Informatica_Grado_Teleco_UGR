/*Realizar un programa que a partir de los 3 puntos extremos de un triángulo (P 1, P 2, P 3) calcule el ´area
del mismo de acuerdo con la siguiente fórmulas
área = √T (T − S1)(T − S2)(T − S3), T = (S1 + S2 + S3) /2 
//EJEMPLO entrada 0 0 4 0 0 3 salida = 6.000000

donde S1, S2, S3 son las longitudes de los lados del triángulo.*/
#include <stdio.h>
#include <math.h>

int main() {
    float P1x,P1y,P2x, P2y, P3x, P3y, area, T ,S1,S2,S3;
    

    printf("EJERCICIO 20: CALCULO AREA DE UN TRIANGULO ( a partir de extremos)\n\n");

    printf("Inserte coordenadas del extremo 1:\n ");
    printf("Valor x del extremo 1: ");
    scanf("%f", &P1x);
    printf("Valor y del extremo 1: ");
    scanf("%f", &P1y);

    printf(" \nInserte coordenadas del extremo 2: ");
    printf("\nValor x del extremo 2: ");
    scanf("%f", &P2x);
    printf("Valor y del extremo 2: ");
    scanf("%f", &P2y);

    printf(" \nInserte coordenadas del extremo 3: ");
    printf("\nValor x del extremo 3: ");
    scanf("%f", &P3x);
    printf("Valor y del extremo 3: ");
    scanf("%f", &P3y);


    
    S1 = sqrt(pow(P1x - P2x, 2) + pow(P1y - P2y, 2));
    S2 = sqrt(pow(P1x - P3x, 2) + pow(P1y - P3y, 2));
    S3 = sqrt(pow(P3x - P2x, 2) + pow(P3y - P2y, 2));

    T = (S1 + S2 + S3) / 2;

    area = sqrt(T * (T - S1) * (T - S2) * (T - S3));


    printf("\nEl area del triangulo es: %f metros al cuadrado\n", area);

    return 0;
}