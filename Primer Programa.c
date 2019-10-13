#include <stdio.h>

int main (){

// Declaracion
int a,b,c,d=100,e=200;

// Ingresar los valores
printf ("Ingrese a, b y c:\n");
scanf ("%d %d %d",&a,&b,&c,&d,&e);

// Impresion
printf ("El valor de a es %d y su ubicacion es %x.\n",a,&a);
printf ("El valor de b es %d y su ubicacion es %x.\n",b,&b);
printf ("El valor de c es %d y su ubicacion es %x.\n",c,&c);
printf ("El valor de d es %d y su ubicacion es %x.\n",d,&d);
printf ("El valor de e es %d y su ubicacion es %x.\n",e,&e);

    return 0;
}
