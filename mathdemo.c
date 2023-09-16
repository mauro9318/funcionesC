#include <stdio.h>
#include <math.h>

int x;
float result;
int main(){
    printf("Ingrese un valor de x: ");
    scanf("%d", &x);
    result=sin(x);
    printf("Eil valor ingresado es: %d",x);
    printf("El valor del seno de x : %f",result);
    return 0;

}
