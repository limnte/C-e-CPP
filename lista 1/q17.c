#include <stdio.h>

int main(){
    float deposito, cheque1, cheque2,saldo1,saldo2;

    printf("Insira o valor do deposito: ");
    scanf("%f", &deposito);

    printf("\nInsira o valor do primeiro cheque: ");
    scanf("%f", &cheque1);

    printf("\nInsira o valor do segundo cheque: ");
    scanf("%f", &cheque2);

    saldo1 = deposito - (deposito * 38/10000) - cheque1;
    saldo2 = saldo1 - (saldo1 * 38/10000) - cheque2;

    printf("\nSaldo atual: %.2f\n", saldo2);

    return 0;
}