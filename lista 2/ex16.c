#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    float vmm,pa,pr;

    printf("Insira o valor do produto e a venda mensal(00 00): ");
    scanf("%f %f",&pa,&vmm);

    if(vmm < 500 || pa < 30){
        pr = pa + (pa * 0.1);

        printf("O preco reajustado deve ser %.2f\n\n",pr);
    }else if(vmm >= 500 & vmm < 1200 || pa >= 30 & pa < 80){
        pr = pa + (pa * 0.15);

        printf("O preco reajustado deve ser %.2f\n\n",pr);
    }else if(vmm >= 1200 || pa >= 80){
        pr = pa - (pa * 0.2);

        printf("O preco reajustado deve ser %.2f\n\n",pr);
    }

    return 0;
}