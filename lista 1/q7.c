#include <stdio.h>

int main(){
    float sb, imp;

    do{
        printf("Insira o salario base: ");
        scanf("%f", &sb);

        if(sb <= 0){
            printf("Erro: salario invalido.\n");
            getchar();
        }
    }while (sb <= 0);


    imp = sb * 0.1;

    printf("\nSalario a receber: %.2f\n", (sb + 50) - imp);
    
    return 0;
}   