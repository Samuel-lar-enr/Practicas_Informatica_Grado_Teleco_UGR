/*Realizar un programa que presente una tabla de grados C a grados Fahrenheit F=(9/5)C+32 desde los 0
grados a los 300, con incremento de 20 en 20 grados*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i;
    for (i = 0; i <300; i+=20){
        printf("Valor grados C: %d,  Fahrenheit: %0.2f \n", i, (9.0/5)*i+32);
    }
    
}