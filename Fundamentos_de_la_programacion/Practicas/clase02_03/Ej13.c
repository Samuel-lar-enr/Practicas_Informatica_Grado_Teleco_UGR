/*13. ¿Qu´e valor muestra por pantalla el siguiente trozo de c´odigo?
Contador = 0;
v = 0 ;
for (i=1; i<=3; i++) {
while (Contador < 3) {
v = v+1;
Contador = Contador + 1;
}
}
printf("%d%d\n",v,Contador);*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i;
    int Contador = 0;
    int v = 0 ;
    for (i=1; i<=3; i++) {
    while (Contador < 3) {
    v = v+1;
    Contador = Contador + 1;
    }
    }
    printf("%d%d\n",v,Contador);
    //33
}