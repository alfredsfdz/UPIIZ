#include <stdio.h>

// Int
int arreglo(int array[],int n){
    int i, j;
    for(i = 1; i < n; i++){
        for(j = 0; j < n-1; j++){
            if(array[j] > array[j+1]){
                int aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
                }
        }
}

    return array[i], n;
}


int main(){

int n, k;

printf("Ingrese la dimension del arreglo: ");
scanf("%d",&n);

int array[n];

printf("\n");
printf("Introduzca los valores:\n");
for(k = 0; k < n; k++){
    scanf("%d",&array[k]);
}

// Llamado de funcion
arreglo(array, n);

printf("\n");
printf("Arreglo ordenado:\n");
for(k = 0; k < n; k++){
    printf("%d\n",array[k]);
}


    return 0;

}
