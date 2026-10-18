 /*Hacer un programa que pida un numero entero N y calcule el mínimo número de bits
 necesario
  para representar ese número N en binario. Solo queremos representar 
 números enteros positivos.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    int bits;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);
    if (N == 0 || N == 1)
        {
            bits = 1;
        }
    else
        {
        bits = log2(N) + 1;
        }
    printf("El minimo numero de bits necesario es: %d\n", bits);
    
    return 0;
}
