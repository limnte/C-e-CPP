#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a,b,c,delta,x1,x2;

    inicio:
        system("cls");

        printf("insira o valor de a,b e c: ");
        scanf("%f %f %f", &a,&b,&c);
        if(a == 0){
            printf("em equacoes quadraticas o valor de A nao pode ser zero!");
            getchar();
            goto inicio;
        }

        system("cls");

        delta = (b * b) - (4*a*c);

        if(delta >= 0.0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);

            printf("\nx1 = %.2f, x2 = %.2f\n\n",x1,x2);
        }else{
            printf("\nraiz imaginaria sem valor real\n\n");
            goto inicio;
        }

    return 0;
}