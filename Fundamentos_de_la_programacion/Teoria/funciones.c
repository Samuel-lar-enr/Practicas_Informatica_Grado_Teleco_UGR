#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int aleatorio(int inferior, int superior){
    return rand()%(superior-inferior+1);
}

int main(){
    srand(time(NULL));
    int nume = aleatorio(100,200);
    printf("%d", nume);

    return 0;
}