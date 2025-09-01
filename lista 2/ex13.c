#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int I;
    float salario,imposto,nsalario;

    system("cls");
    printf("Menu de opcoes:\n");
    printf("1.Imposto\n2.Novo salario\n3.Classificacao\n\n");
    printf("Digite a opcao desejada -> ");
    scanf("%d",&I);

    if(I == 1){
        printf("Insira o seu salario: ");
        scanf("%f",&salario);

        if(salario < 500){
            imposto = salario * 0.05;
            printf("\nO imposto e de %.2f\n\n",imposto);
        }else if(salario >= 500 & salario <= 850){
            imposto = salario * 0.1;
            printf("\nO imposto e de %.2f\n\n",imposto);
        }else if(salario > 850){
            imposto = salario * 0.15;
            printf("\nO imposto e de %.2f\n\n",imposto);
        }


    }else if(I == 2){
        printf("Insira o seu salario: ");
        scanf("%f",&salario);

        if(salario > 1500){
            nsalario = salario + 25;

            printf("\nSeu novo salario e de %.2f\n\n",nsalario);
        }else if(salario >= 750 & salario <=1500){
            nsalario = salario + 50;

            printf("\nSeu novo salario e de %.2f\n\n",nsalario);
        }else if(salario >= 450 & salario <= 750){
            nsalario = salario + 75;

            printf("\nSeu novo salario e de %.2f\n\n",nsalario);
        }else if(salario < 450){
            nsalario = salario + 100;

            printf("\nSeu novo salario e de %.2f\n\n",nsalario);
        }

    }else if(I ==3){
        printf("Insira o seu salario: ");
        scanf("%f",&salario);

        if(salario > 700){
            printf("\nBem remunerado!\n\n");
        }else{
            printf("\nMal remunerado!\n\n");
        }

    }else{
        printf("opcao invalida!\n\n");
        
    }


    return 0;
}