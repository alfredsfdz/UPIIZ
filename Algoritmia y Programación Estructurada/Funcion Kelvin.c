#include <stdio.h>

// Float
float funcionCentigrados(int K){
    float C;
    C = K-273.15;
    printf("C: %.2f grados\n",C);
}

// Float
float funcionFahrenheit(int K){
    float F;
    F = ((K-273.15)*1.8)+32;
    printf("K: %.2f grados\n",F);
}

int main(){

// Llamado de proceso
int K;

printf ("Conversion de K a C y F.\n\n");
printf ("Ingrese K: ");
scanf("%d",&K);

printf ("Conversion:\n");
funcionCentigrados(K);
funcionFahrenheit(K);

    return 0;
}
