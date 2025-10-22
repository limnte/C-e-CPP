#include <stdio.h>
#include <math.h>

int main(){
    float n1;

    do{
        printf("insira um valor inteiro maior que 0: ");
        scanf("%f", &n1);

        if(n1 <= 0){
            printf("Erro: valor invalido.\n");
            getchar();
        }
    }while(n1 <= 0);

    printf("\n----------------------------\n\n");
    printf("a)%.0f ao quadrado = %.0f\n", n1, n1 * n1);
    printf("b)%.0f ao cubo = %.0f\n", n1, n1 * n1 * n1);
    printf("c)Raiz quadrada de %.0f = %.2f\n", n1, sqrt(n1));
    printf("d)Raiz cubica de %.0f = %.2f\n", n1, cbrt(n1));

    return 0;
}