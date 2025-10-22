#include <stdio.h>

int main(){
    float quilos, gramas,racao_por_dia,resto,gato1,gato2;

    printf("Insira o peso em quilos do saco de racao: ");
    scanf("%f", &quilos);
    printf("\nQuantidade de racao para cada gato em gramas: ");
    scanf("%f %f", &gato1, &gato2);

    gramas = quilos * 1000;
    racao_por_dia = (gato1 + gato2) * 5;
    resto = gramas - racao_por_dia;

    printf("\nSobra de racao apos 5 dias: %.2f gramas\n", resto);

    return 0;
}