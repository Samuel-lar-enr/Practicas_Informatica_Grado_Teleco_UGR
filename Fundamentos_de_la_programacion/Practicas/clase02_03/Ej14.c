#include <stdio.h>

int main(){
    int valor= 1;
    int total = 0;
    int i;
    for(i=1;valor>0 && i<=10;i++){
        printf("Introduzca numero %d entero\n", i);
        scanf("%d", &valor);
        if (valor<0){
            printf("Valor dado es negativo, finalizando...\n");
        }else{
            total+=valor;
        };
        i++;
    }
    printf("El valor total es: %d", total);
}   