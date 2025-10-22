#include <stdio.h>

int main(){
    float n, k;

    printf("Insira o valor de N: ");
    scanf("%f", &n);
    printf("\n");

    k = 1;

    for(int i = 1; i < 13; i++){
        int j = n/k;
        k = (k + j)/2;
        printf("Valor de K: %.2f\n", k);
    }

    return 0;
}