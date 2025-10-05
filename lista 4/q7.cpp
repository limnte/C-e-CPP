#include <stdio.h>
#include <stdlib.h>

double somatoria(int n){
    int i,j;
    double fat,s = 1;

    for(i = 2; i <= n; i++){
        fat = 1;

        for(j = 1; j <= i; j++){
            fat *= j;
        }

        s += 1/fat;
    }

    return s;
}


int main(){
    int n;
    double resultado;

    do{
        printf("Digite um numero inteiro positivo maior que 1: ");
        scanf("%d", &n);
        if(n <= 1){
            printf("Numero invalido! Tente novamente.\n");
        }
    }while(n <= 1);

    resultado = somatoria(n); 
    printf("Resultado da somatoria: %.3lf\n", resultado);

    return 0;
}