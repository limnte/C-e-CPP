#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n1, n2, n3;

    while (1) {  // loop infinito
        system("clear");

        printf("Insira 3 numeros: \n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);

        if (n1 > n2 && n2 > n3) {
            printf("ordem crescente: %.2f, %.2f, %.2f\n", n1, n2, n3);
            break; // sai do loop se for válido
        }
        else if (n1 > n3 && n3 > n2) {
            printf("ordem crescente: %.2f, %.2f, %.2f\n", n1, n3, n2);
            break;
        }
        else if (n3 > n1 && n1 > n2) {
            printf("ordem crescente: %.2f, %.2f, %.2f\n", n3, n1, n2);
            break;
        }
        else if (n3 > n2 && n2 > n1) {
            printf("ordem crescente: %.2f, %.2f, %.2f\n", n3, n2, n1);
            break;
        }
        else if (n2 > n3 && n3 > n1) {
            printf("ordem crescente: %.2f, %.2f, %.2f\n", n2, n3, n1);
            break;
        }
        else if (n2 > n1 && n1 > n3) {
            printf("ordem crescente: %.2f, %.2f, %.2f\n", n2, n1, n3);
            break;
        }
        else {
            printf("Entrada invalida! Tente novamente.\n");
            getchar(); getchar(); // espera usuário apertar uma tecla
        }
    }

    return 0;
}
