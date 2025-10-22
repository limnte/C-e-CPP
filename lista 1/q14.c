#include <stdio.h>

int main(){
    int dn, aa;

    do{
        
        printf("Insira o ano do seu nascimento: ");
        scanf("%d", &dn);
        printf("\nInsira o ano atual: ");
        scanf("%d", &aa);

        if(dn > aa){
            printf("Erro: ano invalido.\n");
            printf("A data de nascimento nao pode ser maior que o ano atual.\n");
            getchar();
        }

    }while(dn > aa);

    printf("\nVoce tem %d anos de idade.\n", aa - dn);
    printf("Em 2050 voce tera %d anos de idade.\n", 2050 - dn);

    return 0;
}