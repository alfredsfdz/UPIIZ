 #include <stdio.h>

int main (){

// Declaracion
int n;

// Ingresar tamaño
scanf("%d",&n);

int x[n];

//Impresion del tamaño del arreglo
printf("%d",(unsigned long) sizeof x / sizeof x[0]);;

    return 0;
}
