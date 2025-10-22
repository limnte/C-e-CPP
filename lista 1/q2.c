#include <stdio.h>

int main(){
    int n1,n2,n3;
    int media;

    printf("Insira as tres notas: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Media: %d\n", media);

    return 0;
}