/*
21. Escribir un programa que calcule la capacidad de un disco duro de un ordenador datos (le´ıdos desde el
teclado) el n´umero de cilindros, pistas y sectores por pista. La capacidad de un sector se asume 512 bytes
pero podr´ıa variar en el futuro. La capacidad se calcula como
capacidad = cilindros ∗ pistas ∗ sectores ∗ bytes.
La salida debe tener exactamente el formato siguiente:
El disco duro tiene XXXXXXXXXXXX bytes = XXXXXXXXX Kilobytes
= XXXXXX Megabytes = XXX Gigabytes
Un Kilobyte son 1024 bytes. Un megabyte son (Kilobyte*1024) bytes. Un Gigabyte son (Megabyte*1024)
bytes.*/


#include <stdio.h>
#include <math.h>


int main() {
    int cilindros,pistas,sectores,respuesta, capacidad;
    float bytes, KB, MB, GB;
    int bytesPorSector= 512;

    printf("EJERCICIO 21: calculo de  la capacidad de un disco duro de un ordenador\n\n");

    printf("Inserte cilindros del equipo: ");
    scanf("%d", &cilindros);

    printf(" \nInserte pistas del equipo: ");
    scanf("%d", &pistas);

    printf(" \nInserte sectores del equipo: ");
    scanf("%d", &sectores);

    printf("\n La capacidad de bytes por sector es de %d por defecto ¿ quiere cambiarlo? 1/0");
    scanf("%d", &respuesta);
    
    if(respuesta){
        printf("Valor de la nueva unidad para los bytes por sector");
        scanf("%d", &bytesPorSector);
    }   

    capacidad =  cilindros * pistas * sectores * bytesPorSector;

    bytes= capacidad;
    KB= bytes/1024; 
    MB= KB/1014;
    GB= MB/1014;
    
    printf("\nEl disco duro tiene:\nbytes = %f \nKilobytes= %f \nMegabytes = %f \nGigabytes= %f ",bytes, KB, MB, GB );

    return 0;
}