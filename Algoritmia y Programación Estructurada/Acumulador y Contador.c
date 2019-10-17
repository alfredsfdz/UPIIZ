#include <stdio.h>

int main (){

// Declaracion
float aux = 0;
int a;
float b;

// Ingresar los valores
printf("Ingrese un numero: ");
scanf("%d",&a);
printf("\n");
aux+=a;

// Condicion
while (a != 0){
        printf("Ingrese un numero: ");
        scanf("%d",&a);
        printf("\n");
        aux+=a;
        b++;
}

printf("%.2f\n",aux);
printf("%.2f\n",b);
printf("Promedio: %.4f\n",aux/b);

    return 0;
}
