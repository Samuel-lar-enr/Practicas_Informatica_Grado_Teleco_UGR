#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int aleatorio(int inferior, int superior){
    return rand()%(superior-inferior+1);
}

int main(){
    int opcion;
    float saldo=0;
    float retirar=0;
    float ingresar=0;

    do
    {
        printf("================================\n");
        printf("Que quieres??\n");
        printf("1. Consultar saldo\n");
        printf("2. Retirar efectivo\n");
        printf("3. Ingresar\n");
        printf("4. Salir\n");
        printf("================================\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("Tu saldo es: %0.2f", saldo);
            break;
        case 2:
            printf("Cuanto dinero quieres retirar");
            scanf("%f", &retirar);
            if(retirar<=saldo){
                saldo -= retirar;
            }else{
                printf("No puedes sacar más dinero de el de tu cuentas saldo= %f", saldo);
            }
            break;
        case 3:
            printf("Cuanto dinero quieres ingresar");
            scanf("%f", &ingresar);
            saldo += ingresar;
            printf("Tu saldo actual es %f", saldo);
            break;
        default:
            break;
        }
    } while (opcion !=4);

    

    return 0;
}