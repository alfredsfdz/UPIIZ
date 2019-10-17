#include <stdio.h>

int main (){

// Declaracion
int n, m, i, j;

// Dimension
printf("Ingrese la cantidad de espacios dentro de la matriz:\n");
printf("Filas: ");
scanf("%d", &n);
printf("Columnas: ");
scanf("%d", &m);

int matriz[n][m];

// Ingresar los valores
printf("Ingrese los valores:\n");
for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
      }
}

// Impresion de matriz original
printf("\n");
printf("Su matriz es:\n");
for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
                printf("%d ",matriz[i][j]);
        }
        printf("\n");
}

int x, y, aux;

// Ordenamiento
for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
        for(x = 0; x < n; x++){
            for(y = 0; y < m; y++){
                if(matriz[i][j] > matriz[x][y]){
                    aux = matriz[i][j];
                    matriz[i][j] = matriz[x][y];
                    matriz[x][y] = aux;
                }
            }
        }
    }
}

// Impresion ordenamiento
printf("\n");
printf("Su matriz ordenada de menor a mayor es:\n");
for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
                printf("%d ",matriz[i][j]);
        }
        printf("\n");
}

    return 0;
}
