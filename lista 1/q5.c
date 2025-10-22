#include <stdio.h>

int main(){
    float salario, percentual;

    do{
        printf("\nInsira seu salario: ");
        scanf("%f", &salario);

        if(salario < 0){
            printf("Erro: salario invalido.\n");
            getchar();
        }
    }while(salario < 0);

    do{
        printf("\nInsira o percentual de aumento: ");
        scanf("%f", &percentual);

        if(percentual < 0){
            printf("Erro: percentual invalido.\n");
            getchar();
        }
    }while(percentual < 0);

    printf("\nSeu salario novo eh: %.2f\n", salario += salario * (percentual / 100));
    printf("Aumento recebido: %.2f\n", salario * (percentual / 100));

    return 0;
}