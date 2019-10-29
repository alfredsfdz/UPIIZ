#include <stdio.h>

// Void
void funcion(int x){
    x++;
    printf("%d\n",x);
}

int main(){

// Llamado de proceso
int x = 9;
funcion(x);
printf("%d\n",x);

    return 0;
}
