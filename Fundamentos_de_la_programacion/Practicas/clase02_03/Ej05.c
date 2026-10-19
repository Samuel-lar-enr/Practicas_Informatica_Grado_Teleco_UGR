/*5. Expresar mediante estructuras condicionales anidadas y utilizando ´unicamente condiciones simples (sin
usar &&, ||) las siguientes sentencias:
if ((A<B && C!=D) && (B>D || B==D))
<S1>;
if ((A<B && C!=D) && (B>D || B==E))
<S2>;*/

#include <stdio.h>
int main(){
    int A,B,C,D,E;
    if(A>B){
        if(C!=D){
            if(B>D){
                pritf("SI");
            }
            if(B==D){
                pritf("SI");

            }
            if(B==E){
                printf("S2");
                
            }
        }

    }
}