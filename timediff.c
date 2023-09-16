#include<stdio.h>
#include<time.h>

time_t seconds;

int main(){
    seconds=time(NULL);
    printf("El numero de horas desde EPOCH es: %ld",seconds);




    return 0;

}
