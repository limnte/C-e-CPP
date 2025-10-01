#include <stdio.h>
#include <stdlib.h>

int divbetween(int a, int b, int c){
    int resultado = 0, i;
    int maior,menor;

    if(b > c){
        maior = b;
        menor = c;
    }else{
        maior = c;
        menor = b;
    }

    for(i = menor; i <= maior; i++){
        if(i%a == 0){
            resultado += i;
        }
    }

    return resultado;
}


int main(){

    int a,b,c,r;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a <= 1){
        printf("Valor invalido\n");
        return 1;
    }else{
        r = divbetween(a,b,c);

        printf("Soma dos numeros divisiveis por %d entre %d e %d: %d\n",a,b,c,r);
        return 0;
    }
    
}