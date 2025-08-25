#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("clear");

    int codprod, codpais;
    float PQ,PG,PPG,PT,IMP,VIMP;

    printf("Insira o codigo do produto(1-10): ");
    scanf("%d",&codprod);

    if(codprod >=1 && codprod <= 4){
        PPG = 10;
    }else if(codprod >= 5 && codprod <= 7){
        PPG = 25;
    }else if(codprod >= 8 && codprod <= 10){
        PPG = 35;
    }else{
        printf("\nCodigo de produto invalido!");
        return 1;
    }

    printf("Insira o codigo do pais(1-3): ");
    scanf("%d",&codpais);

    switch (codpais){
        case 1:
            IMP = 0;
            break;
        case 2:
            IMP = 0.15;
            break;
        case 3:
            IMP = 0.25;
            break;
        default:
            printf("Codigo do pais invalido!");
            return 1;
    }

    printf("\nInsira o peso do produto em quilos: ");
    scanf("%f",&PQ);

    PG = PQ * 1000; //o peso em gramas

    printf("\nPeso do produto em gramas: %.2f",PG);
    getchar();
    system("clear");

    

    PT = (PG * PPG)/100; //peso grama * preco(supondo que seja centavo por grama pra evitar valores absurdos)por grama
    VIMP = PT * IMP; //preco total * imp = (valor imposto)
    
    printf("\nPreco total do produto: R$%.2f",PT);
    printf("\nValor total do imposto: R$%.2f",VIMP);
    printf("\nValor total com imposto: R$%.2f",PT + VIMP);

    return 0;
}