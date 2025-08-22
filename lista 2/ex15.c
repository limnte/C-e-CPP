#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("clear");

    float sm,st,sb,sl,ht,vht,d,he,vhe,imp,grat;

    printf("Insira o seu salario minimo: ");
    scanf("%f",&sm);

    printf("\nInsira as horas trabalhadas: ");
    scanf("%f",&ht);

    printf("\nInsira o numero de dependentes: ");
    scanf("%f",&d);

    printf("\nInsira a quantidade de horas extras: ");
    scanf("%f",&he);

    vht = sm / 5;
    st = ht * vht;
    vhe = he * (vht * 0.5);
    sb = sm + st + vhe + (d * 32);

    if(sb < 200){
        printf("\nSeu salario bruto de R$%.2f e isento de IRRF", sb);

    }else if(sb >= 200 & sb <= 500){
        imp = sb * 0.1;
        printf("\nSeu salario bruto de R$%.2f possui R$%.2f de IRRF", sb, imp);

    }else if(sb > 500){
        imp = sb * 0.2;
        printf("\nSeu salario bruto de R$%.2f possui R$%.2f de IRRF", sb, imp);

    }

    sl = sb - imp;
    if(sl <= 350){
        printf("\nSeu salario liquido de %.2f te concede R$100 de gratificacao.\n\n",sl);
    }else{
        printf("\nSeu salario liquido de %.2f te concede R$50 de gratificacao.\n\n",sl);
    }

    
    





    return 0;
}