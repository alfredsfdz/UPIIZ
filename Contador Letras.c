#include <stdio.h>

int main(){

char entrada[1000];
int numletras[27]={0};
char letras[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'};

printf("Escriba una frase: ");
gets(entrada);

int x = 0, y;
while (entrada[x] != '\0'){
        for(y = 0; y < 27; y++)
        if(entrada[x] == letras[y])
        numletras[y]++;
        x++;
}

for(x = 0; x < 27; x++){
    printf("\nLa %c aparece %d veces",letras[x],numletras[x]);
}

    return 0;
}
