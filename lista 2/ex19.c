#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    float alt,peso;

    printf("Insira sua altura em cm (000): ");
    scanf("%f",&alt);

    printf("\nInsira seu peso: ");
    scanf("%f",&peso);

    system("cls");

    if(alt < 120){
        if(peso <= 60){
            printf("Classificacao: A\n\n");
        }else if(peso > 60 && peso <=90){
            printf("Classificacao: D\n\n");
        }else if(peso > 90){
            printf("Classificacao: G\n\n");
        }
    }

    if(alt >=120 && alt <= 170){
        if(peso <= 60){
            printf("Classificacao: B\n\n");
        }else if(peso > 60 && peso <=90){
            printf("Classificacao: E\n\n");
        }else if(peso > 90){
            printf("Classificacao: H\n\n");
        }
    }

    if(alt > 170){
        if(peso <= 60){
            printf("Classificacao: C\n\n");
        }else if(peso > 60 && peso <=90){
            printf("Classificacao: F\n\n");
        }else if(peso > 90){
            printf("Classificacao: I\n\n");
        }
    }

    return 0;
}