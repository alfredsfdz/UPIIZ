#include <stdio.h>

int main (){

// Declaracion
int Arreglo[10];

// Ingresar los valores
for (int i = 0; i < 10; i++){
        scanf("%d",&Arreglo[i]);
}

int *p2 = &Arreglo[0];
int j = p2;

// Comdicion
for (j; j < p2+10; j++){
        int *aux = j;
        printf("%x\n",*aux);
}

    return 0;
}
