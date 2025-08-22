#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    inicio:
        system("clear");

        int hora,min,hora2,min2,resultadoh, resultadom;

        printf("Insira o horario de comeco do jogo: ");
        scanf("%d %d",&hora,&min);

        printf("\nInsira o horario de termino do jogo: ");
        scanf("%d %d",&hora2,&min2);

        resultadoh = hora2 - hora;
        resultadom = min2 - min;

        system("clear");

        if (resultadoh > 24)
        {
            printf("o horario inserido nao esta correto!");
            goto inicio;
        } else {
            printf("o jogo tem uma duracao de %d:%dh\n\n",resultadoh,resultadom);
        } 


        return 0;
}