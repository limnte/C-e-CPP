#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float n1,n2,n3,s1,s2,s3,soma;

    printf("Insira as 3 notas entre 0 e 10: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);

    s1 = n1 * 2;
    s2 = n2 * 3;
    s3 = n3 * 5;
    soma = (s1 + s2 + s3)/10;

    if (soma >= 8){
        printf("sua nota foi A!: %.2f",soma);
    }
    else if(soma >= 7 && soma < 8){
        printf("Sua nota foi B: %.2f",soma);
    }
    else if(soma >= 6 && soma < 7){
        printf("Sua nota foi C: %.2f",soma);
    }
    else if(soma >= 5 && soma < 6){
        printf("Sua nota foi D: %.2f",soma);
    } 
    else if(soma >=0 && soma < 5){
        printf("Sua nota foi E: %.2f",soma);
    }
    else{
        printf("Alguma nota possui um valor invalido");
    }

    return 0;
}