#include <stdio.h>

int main (){

// Declaracion
int aux = 0;
int a;

// Dimension
printf("Ingrese un numero: ");
scanf("%d",&a);
printf("\n");
aux+=a;

//Ingresar los valores
while (a != 0){
        printf("Ingrese un numero: ");
        scanf("%d",&a);
        printf("\n");
        aux+=a;
}

printf("%d\n",aux);

    return 0;
}
