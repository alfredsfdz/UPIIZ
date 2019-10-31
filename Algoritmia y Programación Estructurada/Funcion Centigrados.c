#include <stdio.h>

// Float
float funcionFahrenheit(int C){
    float F;
    F = (C*1.8)+32;
    printf("F: %.2f grados\n",F);
}

// Float
float funcionKelvin(int C){
    float K;
    K = C+273.15;
    printf("K: %.2f grados\n",K);
}

int main(){

// Llamado de proceso
int C;

printf ("Conversion de C a F y K.\n\n");
printf ("Ingrese C: ");
scanf("%d",&C);

printf ("Conversion:\n");
funcionFahrenheit(C);
funcionKelvin(C);

    return 0;
}
