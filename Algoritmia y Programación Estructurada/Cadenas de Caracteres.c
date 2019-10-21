#include <stdio.h>

int main(){

char aux[350];
int i=0;

do{
    printf("Ingresa un caracter %d:\n ",i);
    scanf("%s",&aux[i]);
    i++;
} while(aux[i-1]!='0');

aux[i]='\0';
printf("%c",aux[1]);

    return 0;
}
