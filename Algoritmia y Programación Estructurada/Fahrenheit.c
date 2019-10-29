#include <stdio.h>

int main (){

// Declaracion
float F, C=0, K=0;

// Ingresar los valores
printf ("Conversion de F a C y K.\n\n");
printf ("Ingrese F:\n");
scanf ("%f",&F);
C = ((F-32)*5)/9;
K = C+273.15;

// Impresion de resultados
printf ("Conversion:\n");
printf ("C= %.2f grados\n",C);
printf ("K= %.2f grados\n",K);

    return 0;
}
