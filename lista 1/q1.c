#include <stdio.h>

int main(){
    int a,b,c,d;

    do{
        printf("insira quatro valores inteiros: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        if(a<0 || b<0 || c<0 || d<0){
            printf("Erro: todos os valores devem ser positivos.\n");
            getchar();
        }
    }while(a<0 || b<0 || c<0 || d<0);

    int soma = a + b + c + d;
    printf("Soma: %d\n", soma); 
    
    return 0;
}