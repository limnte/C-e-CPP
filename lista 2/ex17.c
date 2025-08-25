#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//lembrar que pra executar isso no linux tem que abrir o arquivo com -lm

int main(){
    system("cls");//ou clear no linux

    float a,b,c,delta,x1,x2;

    inicio:
        printf("insira o valor de a,b e c: ");
        scanf("%f %f %f", &a,&b,&c);

        system("cls");

        delta = (b * b) - (4*a*c);

        if(delta >= 0.0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);

            printf("\nx1 = %f, x2 = %f\n\n",x1,x2);
        }else{
            printf("\nraiz imaginaria sem valor real\n\n");
            goto inicio;
        }

    return 0;
}