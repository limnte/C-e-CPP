#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    int i, n;
    long long int total, graos = 1;

    printf("Digite qual quadrado vc quer ver quantos graos tem: \n");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        graos *= 2;
    }
    printf("No quadrado %d tem %lld graos de trigo!\n",n,graos/2);
    total = pow(2,64) - 1;
    printf("No total tem %lld graos de trigo!\n",total);

    return 0;
}