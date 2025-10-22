#include <stdio.h>

int main(){
    int sm, ht;
    float vht,sb,imp;

    printf("Insira o salario minimo: ");
    scanf("%d", &sm);

    printf("Insira o numero de horas trabalhadas no mes: ");
    scanf("%d", &ht);

    vht = sm / 2;
    sb = vht * ht;
    imp = sb * 0.03;

    printf("\nValor hora trabalhada: %.2f\n", vht);
    printf("Salario bruto: %.2f\n", vht);
    printf("Imposto: %.2f\n", imp);
    printf("Salario a receber: %.2f\n", sb - imp);

    return 0;
}