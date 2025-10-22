#include <stdio.h>

int main(){
    float deposito, taxa, meses, rendimento;

    printf("Insira o valor do deposito inicial: ");
    scanf("%f", &deposito);

    printf("Insira a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Insira o numero de meses: ");
    scanf("%f", &meses);

    rendimento = deposito * (taxa / 100) * meses;

    printf("O rendimento apos %.0f meses sera: %.2f\n", meses, rendimento);

    return 0;
}