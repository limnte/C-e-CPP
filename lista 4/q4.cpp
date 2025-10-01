#include <stdio.h>
#include <stdlib.h>

void tempo(int segundos){
    int horas, minutos, seg;

    horas = segundos/3600;
    minutos = (segundos % 3600)/60;
    seg = (segundos % 3600)%60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos\n",segundos,horas,minutos,seg);

}

int main(){
    int segundos;

    printf("Digite um valor em segundos: ");
    scanf("%d",&segundos);

    tempo(segundos);

    return 0;
}