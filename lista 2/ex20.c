#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("clear");

    int O,P;
    float imp,peso,gm,pt;

    printf("Insira o codigo do produto (1-10): ");
    scanf("%d",&P);

    printf("\nInsira o peso do produto em kg: ");
    scanf("%f",&peso);

    printf("\nInsira o codigo do pais de origem: ");
    scanf("%d",&O);

    system("clear");

    gm = peso * 1000;
    printf("O peso do produto em gramas:%.2f",gm);

    if(P == 1 || P == 2 || P == 3 || P == 4){
        pt = (gm * 10)/ 100;
        printf("\nO preco total do produto:R$%.2f\n",pt);

        if(O == 1){
            imp = 0;
            printf("\nO valor do imposto e de:R$0");

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else if(O == 2){
            imp = pt * 0.15;

            printf("\nO valor do imposto e de:R$%.2f",imp);

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else if(O == 3){
            imp = pt * 0.25;

            printf("\nO valor do imposto e de:R$%.2f",imp);

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else{
            printf("\n Codigo de origem invalido");
        }
        
    }else if(P == 5 || P == 6 || P == 7){
        pt = (gm * 35)/100;
        printf("\nO preco total do produto:R$%.2f",pt);

        if(O == 1){
            imp = 0;
            printf("\nO valor do imposto e de:R$0");

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else if(O == 2){
            imp = pt * 0.15;

            printf("\nO valor do imposto e de:R$%.2f",imp);

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else if(O == 3){
            imp = pt * 0.25;

            printf("\nO valor do imposto e de:R$%.2f",imp);

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else{
            printf("\n Codigo de origem invalido");
        }

    }else if(P == 8 || P == 9 || P == 10){
        pt = (gm * 25)/100;
        printf("\nO preco total do produto:R$%.2f",pt);

        if(O == 1){
            imp = 0;
            printf("\nO valor do imposto e de:R$0");

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else if(O == 2){
            imp = pt * 0.15;

            printf("\nO valor do imposto e de:R$%.2f",imp);

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else if(O == 3){
            imp = pt * 0.25;

            printf("\nO valor do imposto e de:R$%.2f",imp);

            printf("\nO valor do total do produto e de R$%.2f\n\n",pt+imp);

        }else{
            printf("\n Codigo de origem invalido");
        }
    }

    return 0;
}