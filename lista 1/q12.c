#include <stdio.h>
#include <math.h>

int main(){
    int a,b;

    do{
        printf("Insira dois valores inteiros maior que 0: ");
        scanf("%d %d", &a, &b);
        if(a <= 0 || b <= 0){
            printf("Erro: valor invalido.\n");
            getchar();
        }
    }while(a <= 0 || b <= 0);

    printf("\n-----------------------------\n\n");
    printf("%d elevado a %d = %d",a,b, pow(a,b));
    printf("%d elevado a %d = %d",b,a, pow(b,a));
    
    return 0;
}