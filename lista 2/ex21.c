#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    int codestado,codcarga;
    float imp,vimp,pesot,pesoq,ppq,pc,vt;

    printf("Insira o codigo do Estado de origem da carga (1-5): ");
    scanf("%d",&codestado);

    switch (codestado){
        case 1:
            imp = 0.35;
            break;
        case 2:
            imp = 0.25;
            break;
        case 3:
            imp = 0.15;
            break;
        case 4:
            imp = 0.05;
            break;
        case 5:
            imp = 0;
            break;
        default:
            printf("\nCodigo de Estado invalido!\n\n");
            return 1;
    }

    printf("\nInsira o codigo da carga (10-40): ");
    scanf("%d",&codcarga);

    if(codcarga >= 10 && codcarga <= 20){
        ppq = 100;
    }else if(codcarga >= 21 && codcarga <= 30){
        ppq = 250;
    }else if(codcarga >= 31 && codcarga <= 40){
        ppq = 340;
    }else{
        printf("\nCodigo de carga invalido!\n\n");
        return 1;
    }

    printf("\nInsira o peso da carga do carga em toneladas: ");
    scanf("%f",&pesot);

    pesoq = pesot * 1000; //peso toneladas convertidos em quilos

    printf("\nO peso da carga do caminhao convertido em quilos: %.2f", pesoq);

    pc = pesoq * ppq;
    vimp = pc * imp;
    vt = pc  + vimp;

    printf("\nPreco da carga do caminhao: R$%.2f",pc);
    printf("\nValor do imposto sobre a carga: R$%.2f",vimp);
    printf("\nO valor total transportado pelo caminhao: R$%.2f\n\n",vt);

    getchar();
    return 0;
}