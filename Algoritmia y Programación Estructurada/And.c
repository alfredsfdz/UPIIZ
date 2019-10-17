#include <stdio.h>

int main (){

// Declaracion
int x = 20;
int y = 25;
int z = 30;

// Condicion
if((y>=x)&&(y<=z)){
    printf ("Esta en el rango");
    if(y==25){
        printf (" y es igual a 25\n");
    }
}
else{
    printf ("No esta en el rango\n");
}

return 0;
}
