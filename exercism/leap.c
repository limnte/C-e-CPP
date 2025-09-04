#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int year;

    printf("Digite um ano: ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0){
        printf("%d's a leap year!\n",year);
    }else{
        printf("%d's not a leap year!\n",year);
    }

    return 0;
}