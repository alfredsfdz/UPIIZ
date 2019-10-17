#include <stdio.h>

int main (){

// Declaracion
int i = 0;
int j= 2;

// Condicion
for (i = 0; i <= 4; i++){
    for (j = 2; j <= 4; j++){
            printf ("%d ",i*j);
    }
        printf ("\n");
}

    return 0;
}
