#include <stdio.h>

int main (){

// Declaracion
int b, h=0, Area=0;

// Ingresar los valores
printf ("Area de un rectangulo.\n\n");
printf ("Ingrese la medida de la base:\n");
scanf ("%d",&b);
printf ("Ingrese la medida de la altura:\n");
scanf ("%d",&h);
Area= (b*h);

// Impresion de resultados
printf ("El area del rectangulo es:\n");
printf ("Area= %d cm^2\n",Area);

    return 0;
}
