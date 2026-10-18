/*Hacer un programa que calcule el area de un triangulo dada la longuitud de la base y la 
  altura.*/

#include <stdio.h>

int main()
{
  float base;
  float altura;
  float area;

  printf("EJERCICIO 2: CALCULO AREA DE UN TRIANGULO\n\n");


  printf("Inserte el valor de la base: ");
  scanf("%f", &base);

  printf("Inserte el valor de la altura: ");
  scanf("%f", &altura);

  area = (base * altura)/2;

  printf("La area del triangulo es: %f \n", area);

  return 0;

}
