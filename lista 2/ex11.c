#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    int hora,minuto,hora2,minuto2,tempoH,tempoM;

    printf("Digite o horario de inicio do jogo(00 00): ");
    scanf("%d %d",&hora,&minuto);

    printf("\nDigite o horario de fim do jogo(00 00): ");
    scanf("%d %d",&hora2,&minuto2);

    system("cls");

    tempoH = hora2 - hora;
    tempoM = minuto2 - minuto;

     if(tempoM < 0){
        tempoM += 60;
        tempoH -= 1;
    }

    if(tempoH < 0){
        tempoH += 24;
    }

    printf("A duracao do jogo foi de     %d:%dh",tempoH,tempoM);


    return 0;
}