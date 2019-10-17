#include <stdio.h>

int main (){

int x, y, z, w;

// Ingresar los valores
printf("Ingrese cuatro valores:\n");
printf("x = ");
scanf("%d",&x);
printf("y = ");
scanf("%d",&y);
printf("z = ");
scanf("%d",&z);
printf("w = ");
scanf("%d",&w);

//If en x mayor
if((x>=y)&&(x>=z)&&(x>=w)){
    printf("%d es el numero mayor.\n",x);
}

//Else if en y mayor
else if ((y>=x)&&(y>=z)&&(y>=w)){
    printf("%d es el numero mayor.\n",y);
}

//Else if en z mayor
else if ((z>=x)&&(z>=y)&&(z>=w)){
    printf("%d es el numero mayor.\n",z);
}

//Else if en w mayor
else if ((w>=x)&&(w>=y)&&(w>=z)){
    printf("%d es el numero mayor.\n",w);
}

//If en x menor
if ((x<=y)&&(x<=z)&&(x<=z)){
        printf("%d es el numero menor.\n",x);
}

//Else if en y menor
else if ((y<=x)&&(y<=z)&&(y<=z)){
        printf("%d es el numero menor.\n",y);
}

//Else if en z menor
else if ((z<=x)&&(z<=y)&&(z<=w)){
        printf("%d es el numero menor.\n",z);
}

//Else if en w menor
else if ((w<=x)&&(w<=y)&&(w<=z)){
        printf("%d es el numero menor.\n",w);
}

return 0;
}
