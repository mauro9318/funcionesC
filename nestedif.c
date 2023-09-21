#include<stdio.h>

int option1=0;
int option2=1;


int main(){
    //Este programa genera menus segun la eleccion del usuario    
    if(option1==0){
        printf("Usted eligio la opcion 0, vera el menu de bebidas !ESCOJA UNA¡: \n");

        if(option2==0){
            printf("Usted eligio una cocacola");
        }

        else if(option2==1){

            printf("Usted eligio una pepsi");
        }

        else if(option2==2){

            printf("Usted eligio una salviete");
        }
    }



    return 0;
}
