#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");
   
    float n1,n2;

    printf("insira dois numeros: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);

    if(n1 > n2){
        printf("%.2f e maior que %.2f",n1,n2);
    }
    else{
        printf("%.2f e maior que %.2f",n2,n1);
    }

    
    return 0;
}