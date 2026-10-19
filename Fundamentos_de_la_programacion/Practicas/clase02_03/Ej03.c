/*3. Reescribir el siguiente ejemplo utilizando ´unicamente estructuras condicionales no anidadas:
if (A>B)
    if (B<=C)
        if (C!=D)
        <S1>;
        else
        <S2>;
    else
    <S3>;
else
<S4>;*/

#include <stdio.h>

int main(){

    int A,B,C,D;
    // cond. 1,2 y 3;
    if(A>B && B<=C && C!=D){
        printf("S1");
        //Condicion 1,2 y !3
    } else if(A>B && B<=C && C==D){
        printf("S2");
        //condicion 1 y !2
    } else if(A>B && B>C){
        printf("S3");
    } else {
        //el resto, es decir cond !1
        printf("S4");
    }



}