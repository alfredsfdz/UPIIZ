#include <stdio.h>

int main (){

// Declaracion
float x, y, cx,res;

// Ingresar los valores
printf ("Para la ecuacion: 2x^2+3x+4\n\n");
printf ("Ingrese el valor x:\n");
scanf ("%f",&x);
printf ("Ingrese el valor y:\n");
scanf ("%f",&y);
cx=(x*x);
res=(2*cx)+(3*y)+4;

// Impresion de resultados
printf ("El resultado es= %f\n",res);

    return 0;
}
