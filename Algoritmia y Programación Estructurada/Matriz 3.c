#include <stdio.h>

int main (){

// Declaracion
int arreglo [12][89];

// Tamaño de la matriz
int r = sizeof(arreglo)/sizeof(arreglo[0]);
int c = sizeof(arreglo[0])/sizeof(int);

printf("%d\t",r);
printf("%d\t \n",c);

    return 0;
}
