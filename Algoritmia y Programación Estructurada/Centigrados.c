#include <stdio.h>

int main (){

// Declaracion
float C, F=0, K=0;

// Ingresar los valores
printf ("Conversion de C a F y K.\n\n");
printf ("Ingrese C:\n");
scanf ("%f",&C);
F = (C*1.8)+32;
K = C+273.15;

// Impresion de resultados
printf ("Conversion:\n");
printf ("F= %.2f grados\n",F);
printf ("K= %.2f grados\n",K);

    return 0;
}
