#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3, char tipo){
    float res;

    if(tipo == 'A' || tipo == 'a'){
        res = (n1 + n2 + n3)/3;
    }else if(tipo == 'P' || tipo == 'p'){
        res = ((n1*5) + (n2*3) + (n3*2))/10;
    }else{
        printf("Tipo invalido\n");
        exit(1);
    }

    return res;
}


int main(){
    float n1, n2, n3, res;
    char tipo[10];

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("Digite A para media aritmetica ou P para media ponderada: ");
    scanf("%s", tipo);

    res = media(n1, n2, n3, tipo[0]);

    if(tipo[0] == 'A' || tipo[0] == 'a'){
        printf("\nA media aritmetica eh: %.2f\n", res);
    }

    if(tipo[0] == 'P' || tipo[0] == 'p'){
        printf("\nA media ponderada eh: %.2f\n", res);
    } 

}