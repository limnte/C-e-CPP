#include <stdio.h>

int main(){
    float raio;
    
    printf("Insira o valor do raio do circulo: ");
    scanf("%f", &raio);

    printf("Area do circulo: %.2f\n", 3.14 * raio * raio);

    return 0;
}