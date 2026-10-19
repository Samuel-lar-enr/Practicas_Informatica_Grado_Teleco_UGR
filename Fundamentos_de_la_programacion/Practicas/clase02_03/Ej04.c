/*Realizar un programa que lea dos valores enteros desde teclado y, en el caso de que uno divida al otro,
nos diga qui´en divide a qui´en.*/

#include <stdio.h>

int main(){

    int A,B;
    printf("Ingrese dos valores enteros: ");
    scanf("%d ",&A);
    scanf("%d" ,&B);

    if(A%B==0){
        printf("%d divide a %d\n",B,A);

    } else if(B%A==0){
        printf("%d divide a %d\n",A,B);

    } else {
        printf("Ninguno divide al otro\n");

    }


}