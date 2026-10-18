#include <stdio.h>

int main(){
    int numero=0;
    int total=0;
    while(numero>=0){       
        total+=numero;
        printf("Numero a sumar, negativo para salir: ");
        scanf("%d", &numero);
        

    };
    printf("la suma total es: %d",total );
    return 0;

}