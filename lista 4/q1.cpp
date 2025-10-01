#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float posorneg(float n){
    if (n >= 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){

    float n,r;

    printf("Digite um numero: ");
    scanf("%f",&n);

    r = posorneg(n);

    printf("1 para positivo e 0 para negativo: %.0f\n",r);
}