#include <stdio.h>

int main (){

// Declaracion
int i, j, n = 0;

// Dimension
printf("Ingrese la cantidad de numeros dentro del arreglo: ");
scanf("%d", &n);

int Arreglo[n];

// Ingresar los valores
printf("\n");
printf("Ingrese los valores:\n");
for(i = 0; i < n; i++){
        scanf("%d",&Arreglo[i]);
}

// Ordenamiento
for(i = 1; i < n; i++){
        for( j = 0; j < n-1; j++){
            if(Arreglo[j] > Arreglo[j+1]){
                int aux = Arreglo[j];
                Arreglo[j] = Arreglo[j+1];
                Arreglo[j+1] = aux;
                }
        }
}

// Impresion ordenamiento
printf("Los valores ordenados son: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", Arreglo[i]);
}

    return 0;
}
