#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ncurses.h> //biblioteca mais comum no linux ja que a conio.h nao funciona (so pra pegar o getch()).

int main(){
    system("clear");//no windows e cls, no linux se usa clear lol

    float n1,n2,n3,soma, exame;

    printf("Insira 3 notas: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);

    soma = (n1 + n2 + n3)/3;

    if (soma >= 7){
        printf("\nAprovado, nota: %.2f\n",soma);
    }
    else if (soma >= 3 && soma < 7){
        printf("\nSua nota foi de %.2f, sera necessario realizar um exame!\n",soma);
        exame = 7 - soma;
        printf("\nDeve tirar uma nota de %.2f para ser aprovado\n",exame);
    }
    else if(soma < 3){
        printf("\nReprovado, nota: %.2f\n",soma);
    }
    else{
        printf("\nalgum valor insirido e invalido\n");
    }

    return 0;
}

