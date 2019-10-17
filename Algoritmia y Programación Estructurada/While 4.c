 #include <stdio.h>

int main (){

// Declaracion
int x = 1;
int y = 0;
int z = 0;

// Condicion
while (x < 6){
        printf("\n");
        printf("%d:",x);
        printf("\n");
        while (y < 5){
            while (z < 2){
                    printf("Hola\n");
                    z++;
            }
            z= 0;
            y++;
    }
    y= 0;
    x++;
}

    return 0;
}
