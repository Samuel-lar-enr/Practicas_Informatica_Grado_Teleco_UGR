#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool retirarEfectivo (float *saldo, float retirar);
bool ingresarEfectivo (float *saldo, float ingreso);
void imprimir_saldo(float saldo);
void menu();

int main(){
    int opcion;
    float saldo=0;
    float retirar=0;
    float ingresar=0;

    do
    {
        menu();
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            imprimir_saldo(saldo);
            break;
        case 2:
            printf("Cuanto dinero quieres retirar");
            scanf("%f", &retirar);
            if (!retirarEfectivo(&saldo, retirar)){
                printf("No puedes sacar más dinero de el de tu cuentas saldo= %f\n", saldo);

            };
            
           
            break;
        case 3:
            printf("Cuanto dinero quieres ingresar");
            scanf("%f", &ingresar);
            ingresarEfectivo(&saldo, ingresar);
            printf("Tu saldo actual es %f \n", saldo);
            break;
        default:
            break;
        }
    } while (opcion !=4);

    

    return 0;
};

void imprimir_saldo(float saldo){
    printf("Tu saldo es: %0.2f\n", saldo);

}

bool retirarEfectivo (float *saldo, float retirar){
    bool respuesta = false;
    if(retirar<=*saldo){
        *saldo -= retirar;
        respuesta = true;
    }
    return respuesta;
}
bool ingresarEfectivo (float *saldo, float ingreso){
    *saldo += ingreso;
    return true;
}

void menu(){
    printf("================================\n");
    printf("Que quieres??\n");
    printf("1. Consultar saldo\n");
    printf("2. Retirar efectivo\n");
    printf("3. Ingresar\n");
    printf("4. Salir\n");
    printf("================================\n");
}