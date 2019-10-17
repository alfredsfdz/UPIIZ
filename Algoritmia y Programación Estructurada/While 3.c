 #include <stdio.h>

int main (){

// Declaracion
int x = 1;
int y = 0;

// Condicion
while (x < 11){
        printf("\n");
        printf("%d:",x);
        printf("\n");
        while (y < 5){
            printf("Hola\n");
            y++;
    }
    y = 0;
    x++;
}

    return 0;
}
