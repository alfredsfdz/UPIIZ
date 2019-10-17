 #include <stdio.h>

int main (){

// Declaracion
int x = 1;
int y = 0;

// Condicion
do{
    printf("\n");
    printf("%d:",x);
    printf("\n");
    do{
        printf("Hola\n");
        y++;
    }while (y < 10);
    y = 0;
    x++;
}while (x < 6);

    return 0;
}
