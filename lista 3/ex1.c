#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

long long fatorial(int N){
    long long resultado = 1;
    for(int i = 1; i<= N; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
    system("cls");

    int rep, numero;

    printf("Insira quantas vezes voce quer realizar a operacao: ");
    scanf("%d",&rep);

    for(int i = 1; i <= rep; i++){
        printf("\nDigite o valor para calcular a fatorial(%d/%d): ", i, rep);
        scanf("%d",&numero);

        if(numero <= 0){
            printf("\nNao existe valor fatorail de numero negativo!.\n\n");
        }else{
            printf("Fatorial de %d! = %lld\n\n", numero,fatorial(numero));
        }
    }

    return 0;
}