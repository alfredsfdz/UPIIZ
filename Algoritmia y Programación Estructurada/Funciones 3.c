#include <stdio.h>

// Int
int funcion(int x){
    x++;
    return x;
}

int main(){

// Llamado de proceso
int x = 5;
int g = funcion(x);

printf("%d\n",x);
printf("%d\n",g);

    return 0;
}
