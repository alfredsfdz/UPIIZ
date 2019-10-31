#include <stdio.h>

// Float
float funcionCentigrados(int F){
    float C;
    C = ((F-32)*5)/9;
    printf("C: %.2f grados\n",C);
}

// Float
float funcionKelvin(int F){
    float K;
    K = ((F+459.67)*5)/9;
    printf("K: %.2f grados\n",K);
}

int main(){

// Llamado de proceso
int F;

printf ("Conversion de F a C y K.\n\n");
printf ("Ingrese F: ");
scanf("%d",&F);

printf ("Conversion:\n");
funcionCentigrados(F);
funcionKelvin(F);

    return 0;
}
