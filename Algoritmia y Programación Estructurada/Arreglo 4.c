#include <stdio.h>

int main (){

// Declaracion
int arreglo[6];
int x;
int y=0;

// Condicion
for (x=0;x<6;x++){
        y=x;
        arreglo[x]=x*3;
        printf("%d\n",arreglo[y]);
}

    return 0;
}
