#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n;

    system("cls");

    printf("Digite o numero de termos: \n");
    scanf("%d",&n);

    i = 1;
    j = 4;

    for(i = 1; i <= n; i++,j++){
        printf("%d %d %d ", i, j, j);
    }

    system("pause > null");
}