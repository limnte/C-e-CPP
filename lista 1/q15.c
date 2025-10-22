#include <stdio.h>

int main(){
    int vb;
    float imp,ld,custoconsumidor,a,b;

    printf("insira o valor base do veiculo: ");
    scanf("%d", &vb);
    printf("\ninsira o percentual de impostos: ");
    scanf("%f", &a);
    printf("\ninsira o percentual de lucro do distribuidor: ");
    scanf("%f", &b);

    imp = vb * (imp / 100);
    ld = vb + imp * (ld / 100);
    custoconsumidor = vb + imp + ld;

    printf("\nO valor dos impostos eh: %.2f\n", imp);
    printf("\nO lucro do distribuidor eh: %.2f\n", ld);
    printf("\nO custo ao consumidor eh: %.2f\n", custoconsumidor);
    
    return 0;
}