#include <stdio.h>

int main(){

// Declaracion
char entrada[1000];
int numvocales[5]={0};
char vocales[]={'a','e','i','o','u'};

// Ingresar frase
printf("Escriba una frase: ");
gets(entrada);

// Condiciom
int x = 0, y;
while (entrada[x] != '\0'){
        for(y = 0; y < 5; y++)
        if(entrada[x] == vocales[y])
        numvocales[y]++;
        x++;
}

for(x = 0; x < 5; x++){
    printf("\nLa %c aparece %d veces",vocales[x],numvocales[x]);
}

    return 0;
}

