#include <stdio.h>
#include <math.h>


int main(){
    float x, cosx,cosseno,termo1, termo2, termo3;

    printf("valor de x: ");
    scanf("%f", &x);

    termo1 = pow(x,2);
    termo2 = pow(x,4);
    termo3 = pow(x,6);

    cosseno = 1 - (termo1 / 2) + (termo2 / 24) - (termo3 / 720);

    cosx = cos(x);

    printf("\nValor de cos(x) pela funcao cos(x) = %.6f\n", cosx);
    printf("Calculado pelo programa por meio da serie de Taylor: %.6f\n", cosseno);

    return 0;
}