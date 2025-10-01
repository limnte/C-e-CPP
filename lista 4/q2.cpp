#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int n1, int n2){
    return (n1 + n2);
}

int main(){

    int n1,n2,r;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d",&n1,&n2);

    if(n1 < 0 || n2 < 0){
        printf("Valor invalido\n");
        return 1;
    }else{
        r =  soma(n1,n2);
        printf("Soma dos numeros: %d\n",r);
        return 0;
    }
}