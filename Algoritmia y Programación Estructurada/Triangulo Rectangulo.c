#include <stdio.h>

int main (){

// Declaracion
float b, h, Area=0;

// Ingresar los valores
printf ("Area de un triangulo rectangulo.\n\n");
printf ("Ingrese la medida de la base:\n");
scanf ("%f",&b);
printf ("Ingrese la medida de la altura:\n");
scanf ("%f",&h);
Area= (b*h)/2;

// Impresion de resultados
printf ("El area del triangulo rectangulo es:\n");
printf ("Area= %f cm^2\n",Area);

    return 0;
}
