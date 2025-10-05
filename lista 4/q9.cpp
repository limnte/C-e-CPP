#include <stdio.h>
#include <math.h>

float soma(int n){
    float s = 0,c,b;
    int i;

    for(i = 1; i<= n; i++){
        c = pow(i,2)+1;
        b = i + 3;
        s += c/b;

        if(i < n){
            printf("(%0.0f/%0.0f) + ",c,b);
        }
        if(i == n){
            printf("(%0.0f/%0.0f) = ",c,b);
        }
    }

    return s;
}


int main(){
    int n;
    float res;
   
    do{
        printf("\nDigite um numero inteiro maior ou igual a 1: ");
        scanf("%d", &n);
        if(n < 1){
            printf("\n\nNumero invalido! Tente novamente.");
        }
    }while(n < 1);

    res = soma(n);
    printf("%.2f",res);

    return 0;
}