 #include <stdio.h>

int main (){

// Declaracion
int n;

// Ingresar tama�o
scanf("%d",&n);

int x[n];

//Impresion del tama�o del arreglo
printf("%d",(unsigned long) sizeof x / sizeof x[0]);;

    return 0;
}
