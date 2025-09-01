#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    int n1;

    printf("Insira um numero inteiro: \n");
    scanf("%d",&n1);

    if(n1%2==0){
        printf("\nNumero par!\n");
    }else{
        printf("\nNumero impar!\n");
    }

    return 0;
}