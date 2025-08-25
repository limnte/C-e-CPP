#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    float a,b,c,d;

    inicio:
        printf("Insira tres valores: ");
        scanf("%f %f %f",&a,&b,&c);

        if (!(a <= b && b <= c)){
            printf("Erro: os numeros devem estar em ordem crescente!. \n");
            system("Pause");
            system("cls");
            goto inicio;
        }

        printf("\nInsira o quarto valor: ");
        scanf("%f",&d);

        system("cls");

        printf("Numeros em ordem decrescente: ");

        if(d > c){
            printf("%.2f, %.2f, %.2f, %.2f",d,c,b,a);
        }else if(d > b && d < c){
            printf("%.2f, %.2f, %.2f, %.2f",c,d,b,a);
        }else if(d > b && d < a){
            printf("%.2f, %.2f, %.2f, %.2f",c,b,d,a);
        }else{
            printf("%.2f, %.2f, %.2f, %.2f",c,b,a,d);
        }


    return 0;
}