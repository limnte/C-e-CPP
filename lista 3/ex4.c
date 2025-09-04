#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int n,rep,i,j;
    long long fat;

    printf("Digite quantas vezes deseja realizar a operacao: ");
    scanf("%d",&rep);

    

    for(i=1;i<=rep;i++){
        printf("\nDigite um numero para calcular o fatorial: ");
        scanf("%d",&n);

        fat = 1;
        for(j = 1; j <= n; j++){
            fat *= j;
        }

        printf("%d! = %lld\n",n,fat);
    }

    return 0;
}