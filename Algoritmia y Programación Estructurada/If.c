#include <stdio.h>

int main (){

// Declaracion
int x;

// Ingresar los valores
printf ("Ingresa tu edad:\n");
scanf ("%d",&x);

// Condicion
if( x>= 18){
    printf ("Mayor de edad\n");

}else{
    printf ("Menor de edad\n");
}

    return 0;
}
