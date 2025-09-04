#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,ant1,ant2,atual;

    system("cls");

    ant1 = 0;
    ant2 = 1;
    n = 8;
    printf("%d %d ",ant1,ant2);
    for(i = 3; i <= n; i++){
        atual = ant1 + ant2;
        printf("%d ",atual);
        ant1 = ant2;
        ant2 = atual;
    }

    return 0;
}