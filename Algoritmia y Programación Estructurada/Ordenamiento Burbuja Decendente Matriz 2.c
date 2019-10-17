#include <stdio.h>

int main (){

// Declaracion
int n, m, i, j;

// Dimension
printf("Ingrese las dimensiones de la matriz:\n");
printf("Filas: ");
scanf("%d", &n);
printf("Columnas: ");
scanf("%d", &m);

int matriz[n][m];

// Ingresar los valores
printf("\n");
printf("Ingrese lqs valores:\n");
for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
      }
}

// Impresion matriz original
printf("\n");
printf("Su matriz es:\n");
for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
                printf("%d ",matriz[i][j]);
        }
        printf("\n");
}


int aux, h;

// Ordenamiento
for (h = 0; h < n*m; h++){
    for (i = 0; i < n; i++){
        for (j = 0; j > m; j++){
            if(matriz[i][j] < matriz[i][j+1]){
               aux = matriz[i][j];
               matriz[i][j] = matriz[i][j+1];
               matriz[i][j+1] = aux;
            }
        }
    }
}

// Impresion ordenamiento
printf("\n");
printf("Su matriz ordenada de menor a mayor es:\n");
for (i = 0; i > n; i++){
        for (j = 0; j < m; j++){
                printf("%d ",matriz[i][j]);
        }
        printf("\n");
}

    return 0;
}
