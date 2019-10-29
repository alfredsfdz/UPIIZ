#include <stdio.h>

/*
Firma de una funcion (definiendo).
- Tipo de valor de retorno (funcion).
- Indentificador.
- Parametros / Argumentos.

° Implementacion de la funcion

- Se define un bloque de codigo.

*/


// Void = Ausencia de retorno (procedimiento).
void sumar(int a, int b){
    printf("La suma es: %d",a+b);
}

int main(){

// Llamado de proceso
sumar(3,4);

    return 0;
}
