#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("clear");

    float s,boni,aux,ns;

    printf("Insira seu salario: ");
    scanf("%f",&s);

    if(s <= 600){
        aux = 150;
    }else if(s > 600){
        aux = 100;
    }


    if(s <= 500){
        boni = s * 0.05;
        ns = s + boni + aux;

        printf("\nSeu novo salario e de R$%.2f\n\n", ns);
    }else if(s > 500 & s<=1200){
        boni = s * 0.12;
        ns = s + boni + aux;

        printf("\nSeu novo salario e de R$%.2f\n\n", ns);
    }else if(s > 1200){
        ns = s + aux;

        printf("\nSeu novo salario e de R$%.2f\n\n", ns);
    }



    return 0;
}