/*2. Realizar un programa para calcular los valores de la funci´on:
f (x, y) =
√x/y^2 −1
para todas las parejas de valores (x, y) con x = −50, −48, . . . , 48, 50, e y = −40, −39, . . . , 39, 40.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int x,y;

    for(x=-50; x<=50; x+=2){
        for(y=-40; y<=40; y++){
            
            printf("f(%d,%d) = %.2f\n",x,y,sqrt(x)/(pow(y,2)-1));
            
        }
    }
    
}