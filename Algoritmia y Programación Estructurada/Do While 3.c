 #include <stdio.h>

int main (){

// Declaracion
int x = 1;
int y = 0;
int z = 0;

// Condicion
do{
    printf("\n");
    printf("%d:",x);
    printf("\n");
    do{
            do{
        printf("Hola\n");
        z++;
            }while (z < 2);
            z = 0;
            y++;
    }while (y < 5);
    y = 0;
    x++;
}while (x < 6);

    return 0;
}
