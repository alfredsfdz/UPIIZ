#include <stdio.h>

int main (){

// Declaracion
float bi, bs, h, Area=0;

// Ingresar los valores
printf ("Area de un trapecio.\n\n");
printf ("Ingrese la medida de la base inferior:\n");
scanf ("%f",&bi);
printf ("Ingrese la medida de la base superior:\n");
scanf ("%f",&bs);
printf ("Ingrese la medida de la altura:\n");
scanf ("%f",&h);
Area= ((bi+bs)/2)*h;

// Impresion de resultados
printf ("El area del trapecio es:\n");
printf ("Area= %f cm^2\n",Area);

    return 0;
}
