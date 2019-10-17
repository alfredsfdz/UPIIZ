#include <stdio.h>

int main (){

// Declaracion
int x, y, z;

// Condicion
for (x = 1; x <=5; x++){
    printf("\n");
    printf("%d:",x);
    printf("\n");
    for (y = 1; y <=5; y++){
        for(z = 1; z <= 2; z++){
            printf("Hola\n");
        }
    }
}

    return 0;

}
