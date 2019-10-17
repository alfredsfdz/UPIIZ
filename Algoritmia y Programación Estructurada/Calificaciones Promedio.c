#include <stdio.h>

int main (){

// Declaracion
int n, i = 0;
float aux = 0;

// Ingresar dimension
printf("Ingrese un numero de calificaciones: ");
scanf ("%d",&n);

int arreglo[i];

// Ingresar los valores
for (i; i < n; i++){
    scanf ("%d",&arreglo[i]);
    aux+=arreglo[i];
}

printf("%d\n",aux);
printf("Promedio: %f",aux/n);

return 0;
}
