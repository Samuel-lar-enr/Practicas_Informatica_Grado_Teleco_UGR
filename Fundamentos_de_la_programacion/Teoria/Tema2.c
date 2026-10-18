#include <stdio.h>
#include <stdbool.h>

int main(){
    /*
    bool resultado;
    int x = 8;
    resultado = (4 <x) <6;
    resultado = resultado <6;
    printf("%d", resultado);
    */
   /*
   int hora = 0;
   printf("¿que hora es?");
   scanf("%d",&hora);
    if(hora >= 600 && hora <=1400){
        printf("Buenos dias");
    }else if (hora > 1400 && hora <2100)
    {
        printf("Buenos tardes");

    }else
    {
        printf("Buenos noches");
    }
    */

    /*Dadas las variables count = 0 y 
    limit = 10, calcule el valor de 
    las siguientes expresiones 
    booleanas:*/
   // int count = 0;
    //int limit = 10;
    //(count == 0) && (limit < 20)= true/1
    //(limit > 20) || (count < 5)=  true/1
    //!(count == 12)= !false= true
    //(count == 1) && (x < y)= false
    //!(((count < 10) || ( x < y )) && (count >= 0))= !((true || true)) && true) = !(true && true) =!true = false 

    /*RETO 1: COMPLETA LA CONDICIÓN

    Este programa lee la hora en formato HHMM (por ejemplo, 1530 son las 15:30)
    y saluda según la hora. Falta la condición del segundo if:*/
    int hora = 0;
    printf("¿que hora es?");
    scanf("%d",&hora);

    if (hora>2400 || (hora % 100) >59 || (hora/100)>=24 || hora< 0 )
    {
        printf("\n Error al poner la fecha (excede los limites): %d ", hora);
    
    }else{
        if (hora >= 600 && hora < 1400 ) {
            printf("¡Buenos días!\n");
        } else {
            if ( hora >= 1400 && hora <1900 ) {
                printf("¡Buenas tardes!\n");
            } else {
                printf("¡Buenas noches!\n");
            }
        }
    }
   /* Antes de dar por buena vuestra solución, probadla al menos con 0, 300,
    600, 1359, 1400, 2059, 2100 y 2359. Pensad bien qué pasa a las 3:00 de la
    madrugada 😉

    RETO 2: ¿ES UNA HORA VÁLIDA?

    Ahora mismo, si el usuario escribe 2575 o 1290, el programa saluda tan
    tranquilo, pero esas horas no existen. Añadid una comprobación para que,
    antes de saludar, el programa verifique que:

    * las horas están entre 0 y 23
    * los minutos están entre 0 y 59

    Si la hora no es válida, el programa debe mostrar un mensaje de error y no
    saludar.

    💡 PISTA: ¿cómo separaríais las horas de los minutos de un número
    como 1530? Acordaos de los operadores / y % con enteros, que vimos en el
    Tema 1. Probad en papel qué dan 1530 / 100 y 1530 % 100.*/

    return 0;
}
