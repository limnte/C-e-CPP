#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    int i, n, soma_quadrados, soma = 0, quadrado_soma = 0;

    printf("Digite o numero de termos: ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        soma += i;
        quadrado_soma += pow(i,2);
    }
    soma_quadrados = pow(soma,2);

    printf("\nQuadrado da soma: %d\n",soma_quadrados);
    printf("Soma dos quadrados: %d\n",quadrado_soma);
    printf("Diferenca: %d\n",soma_quadrados - quadrado_soma);


    return 0;
}