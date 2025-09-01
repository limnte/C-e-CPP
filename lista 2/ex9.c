#include <stdio.h>
#include <stdlib.h>
#include <time.h> //biblioteca que inclui funcoes de data e hora do sistema

int main(){
    system("cls");

    time_t agora;//variavel que armazena o tempo atual do sistema em seg
    struct tm*info;

    const char *meses[] = {
        "Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"
    }; //array de strings para os nomes por extenso

    time(&agora);//time() retorna o tempo atual do sistema em seg

    info = localtime(&agora);//converte o tempo de seg para a hora local

    printf("%02d/%02d/%04d\n", info->tm_mday/*dia do mes*/,info->tm_mon + 1/*mes(0-11) do ano + 1*/, info->tm_year+1900/*ano + 1900 pois em C comeca a contar desde 1900*/);

    printf("%s, %02d:%02d\n\n",meses[info ->tm_mon],info->tm_hour,info->tm_min);


    

    return 0;
}