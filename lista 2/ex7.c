#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    system("clear");

    int I;
    float A,B,C,temp;

    printf("Escolha o valor de A: ");
    scanf("%f",&A);
    printf("Escolha o valor de B: ");
    scanf("%f",&B);
    printf("Escolha o valor de C: ");
    scanf("%f",&C);

    system("clear");

    inicio:
        printf("1. A, B e C em ordem crescente\n2. A, B e C em ordem decrescente\n3. O maior numero fica entre os dois outros numeros\n\nInsira uma entrada de 1 a 3: ");
        scanf("%d",&I);

        if (I==1){
            
            if(A > B){
                temp = A; A = B; B = temp;
            }
            if(A > C){
                temp = A; A = C; C = temp;
            }
            if(B > C){
                temp = B; B = C; C=temp;
            }

            printf("Ordem crescente:%.2f, %.2f, %.2f\n\n", A,B,C);

        }else if(I==2){
            if(A < B){
                temp = A; A = B; B = temp;
            }
            if(A < C){
                temp = A; A = C; C = temp;
            }
            if(B < C){
                temp = B; B = C; C=temp;
            }

            printf("Ordem decrescente:%.2f, %.2f, %.2f\n\n", A,B,C);

        } else if(I == 3){
            if(A>B & A>C){
                printf("O maior numero no meio:%.2f, %.2f, %.2f\n\n",B,A,C);
            }

            if(B>A & B>C){
                printf("O maior numero no meio:%.2f,%.2f,%.2f\n\n",A,B,C);
            }

            if(C>A & C>B){
                printf("O maior numero no meio:%.2f,%.2f,%.2f\n\n",A,C,B);
            }
        } else{
            printf("insira um valor valido!\n\n");
            goto inicio;
        }


        return 0;
}