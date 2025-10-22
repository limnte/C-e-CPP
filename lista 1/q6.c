#include <stdio.h>

int main(){
    float sb,sn, imp, grati;

    do{
        printf("Insira o salario base: ");
        scanf("%f", &sb);

        if(sb <= 0){
            printf("Erro: salario invalido.\n");
            getchar();
        }
    }while(sb <= 0);

    grati = sb * 0.05;
    imp = sb * 0.07;
    sn = sb + grati - imp;

    printf("\nSalario novo: %.2f\n", sn);

    return 0;
}