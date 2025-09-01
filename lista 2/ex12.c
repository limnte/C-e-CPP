#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int I;
    float sb,am,sam;

    inicio:
        system("cls");
        printf("Codigos\n");
        printf("1- Escrituario\n2- Secretario\n3- Caixa\n4- Gerente\n5- Diretor\n\n");
        printf("Insira o codigo do seu cargo: ");
        scanf("%d",&I);

        if(I == 1){
            printf("\ninsira seu salario atual: ");
            scanf("%f",&sb);

            am = sb * 0.5;
            sam = am + sb;

            printf("\nSeu aumento sera de %.2f\nSeu novo salario e de %.2f\n\n",am,sam);
        }

        if(I == 2){
            printf("\ninsira seu salario atual: ");
            scanf("%f",&sb);

            am = sb * 0.35;
            sam = am + sb;

            printf("\nSeu aumento sera de %.2f\nSeu novo salario e de %.2f\n\n",am,sam);
        }

        if(I == 3){
            printf("\ninsira seu salario atual: ");
            scanf("%f",&sb);

            am = sb * 0.2;
            sam = am + sb;

            printf("\nSeu aumento sera de %.2f\nSeu novo salario e de %.2f\n\n",am,sam);
        }

        if(I == 4){
            printf("\ninsira seu salario atual: ");
            scanf("%f",&sb);

            am = sb * 0.1;
            sam = am + sb;

            printf("\nSeu aumento sera de %.2f\nSeu novo salario e de %.2f\n\n",am,sam);
        }

        if(I == 5){
            printf("Ola diretor! o senhor nao tem aumento.");
        }

        if(I > 5){
            printf("codigo invalido!\n\n");
            goto inicio;
        }


    return 0;
}