#include <stdio.h>

// Int
int arreglo(int *p,int n){
    int i, j;
    for(i = 1; i < n; i++){
        for(j = 0; j < n-1; j++){
            if(*(p+j) > *(p+j+1)){
                int aux = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = aux;
                }
        }
}

    return *p, n;
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

int *p = &array[0];

// Llamado de funcion
arreglo(array, n);

printf("\n");
printf("Arreglo ordenado:\n");
for(k = 0; k < n; k++){
    printf("%d\n",array[k]);
}

    return 0;

}
