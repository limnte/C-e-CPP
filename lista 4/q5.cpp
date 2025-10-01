#include <stdlib.h>
#include <stdio.h>

float percentual(float a, float b){
    float perc;

    perc = ((b * 100)/a)-100;

    return perc;
}


int main(){
    float valor_inicial, novo_valor, resultado;

    printf("Digite o salario antigo: ");
    scanf("%f",&valor_inicial);

    printf("Digite o novo salario: ");
    scanf("%f",&novo_valor);

    resultado = percentual(valor_inicial, novo_valor);

    printf("\nO percentual de aumento foi de %.2f%",resultado);
}