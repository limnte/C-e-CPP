#include <stdio.h>

int main(){
    float pes,jarda, milha, polegadas;


    printf("Insira o valor em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jarda = pes / 3;
    milha = pes / 5280;

    printf("\n%.2f polegadas\n", polegadas);
    printf("%.2f jardas\n", jarda);
    printf("%2f milhas\n", milha);

    return 0;
}