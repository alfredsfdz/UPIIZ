#include <stdio.h>

int main (){

// Declaracion
float r, cr=0, Area=0;
double pi=3.14159265358979323846;

// Ingresar los valores
printf ("Area de un circulo.\n\n");
printf ("Ingrese el radio de la circunferencia:\n");
scanf ("%f",&r);
cr= (r*r);
Area= pi*cr;

// Impresion de resultados
printf ("El area de la circunferencia es:\n");
printf ("Area= %f cm^2\n",Area);

return 0;
}
