/*Realizar un programa que muestre la tabla de multiplicar de los enteros menores que diez.*/

#include <stdio.h>

int main(){
    int i, j;

    for ( i = 1; i < 10; i++)
    {
        printf("TABLA DEL %d\n", i);
        for ( j = 0; j <= 10; j++)
        {
            printf("%d * %d= %d\n", i, j, i*j);

        }
        
    }
    

}