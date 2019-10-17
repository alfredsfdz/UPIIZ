#include <stdio.h>

int main (){

// Declaracion
int arreglo[6];
int x;
int y;

// Condicion
for (x = 0; x < 6; x++){
        arreglo[x]=x*3;
}

for (y = 0; y < 6; y++){
        printf("%d\n",arreglo[y]);
}

    return 0;
}
