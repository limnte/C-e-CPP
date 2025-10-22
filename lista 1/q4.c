#include <stdio.h>

int main(){
    float salario;

    do{
        printf("Insira seu salario: ");
        scanf("%f", &salario);

        if(salario < 0){
            printf("Erro: salario invalido.\n");
            getchar();
        }

    }while(salario < 0);

    printf("Seu salario novo eh: %.2f\n", salario += salario * 0.25);
    

    return 0;
}