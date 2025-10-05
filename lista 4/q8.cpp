#include <stdio.h>

float peso_ideal(int sexo, float altura){
    float ideal;

    if(sexo == 1){
        ideal = (62.1 * altura) - 44.7;
    }
    
    if(sexo == 2){
        ideal = (72.7 * altura) - 58;
    } 

    return ideal;
}


int main(){
    int sexo;
    float altura,res;

    printf("\nDigite sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    do{
        printf("\nDigite seu sexo (1 - Feminino / 2 - Masculino): ");
        scanf("%d", &sexo);
        if(sexo != 1 && sexo != 2){
            printf("\nSexo invalido! Tente novamente.");
        }
    }while(sexo != 1 && sexo != 2);

    res = peso_ideal(sexo, altura);
    
    printf("\nSeu peso ideal eh %.2fkg",res);

    return 0;
}