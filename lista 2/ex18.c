#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    int x,y,z;

    printf("Insira os valores dos lados X,Y e Z de um triangulo: ");
    scanf("%d %d %d",&x,&y,&z);

    if(x+y > z || x+z > y || z+y > x){
        
        if(x == y && y == z){
        printf("\nTriangulo equilatero\n\n");

        }else if(x!=y && y!=z){
        printf("\nTriangulo escaleno\n\n");

        }else if((x==y && x!=z)||(x==z && z!=y)||(z==y && y!=x)){
        printf("\nTriangulo isosceles\n\n");

        }
    }else{
        printf("\nEsses valores nao formam um triangulo!\n\n");
    }

    return 0;
}