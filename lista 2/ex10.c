#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("clear");

    int dia1,mes1,ano1,dia2,mes2,ano2;

    printf("Insira a data um: ");
    scanf("%d %d %d",&dia1,&mes1,&ano1);

    printf("\nInsira a data dois: ");
    scanf("%d %d %d",&dia2,&mes2,&ano2);

    if(ano1 > ano2){
        printf("a maior data e: %d/%d/%d\n\n",dia1,mes1,ano1);
    }else if(ano2 > ano1){
        printf("a maior data e: %d/%d/%d\n\n",dia2,mes2,ano2);
    }else if(mes1 > mes2){
        printf("a maior data e: %d/%d/%d\n\n",dia1,mes1,ano1);
    }else if(mes2 > mes1){
        printf("a maior data e: %d/%d/%d\n\n",dia2,mes2,ano2);
    }else if(dia1>dia2){
        printf("a maior data e: %d/%d/%d\n\n",dia1,mes1,ano1);
    }else{
        printf("a maior data e: %d/%d/%d\n\n",dia2,mes2,ano2);
    }

    return 0;
}