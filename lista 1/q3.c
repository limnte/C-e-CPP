#include <stdio.h>

int main(){
    int n1,n2,n3;
    int p1,p2,p3;
    int media;

    printf("Insira as tres notas: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("\nInsira os pesos: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);

    printf("Media ponderada: %d\n", media);

    return 0;
}