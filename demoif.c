#include<stdio.h>
int n=11;

int main(){
    if (n>10 && n<20)
        printf("El numero es mayor que diez, pero es menor a 20\n");

    else if(n==10)
        printf("El numero es diez\n");

    else if(n>20)
        printf("El numero es mayor que veinte\n");


    else
        printf("Error no hay numero\n");


    return 0;
}
