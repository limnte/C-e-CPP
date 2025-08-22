    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main(){
        system("clear");

        float a,b, soma;
        int opt;
        double raiz,resultado;


        inicio:
            printf("\n1. Somar dois numeros\n2. Raiz quadrada de um numero\n\nSelecione uma opcao:");
            scanf("%d",&opt);

            system("clear");

            if(opt == 1){
                printf("Insira dois valores para realizar a soma: ");
                scanf("%f %f",&a,&b);

                soma = a + b;

                system("clear");

                printf("%.2f + %.2f = %.2f\n\n",a,b,soma);

            }else if(opt == 2){
                inicio2:
                    printf("Insira um numero: ");
                    scanf("%lf",&raiz);


                    if(raiz < 0){
                        printf("nao existe raiz quadrada real de numero negativo!\n\n");
                        goto inicio2;

                    }else{
                        resultado = sqrt(raiz);//sqrt nao funciona no linux sem chamar -lm no terminal lol, mas o codigo funciona.

                        printf("a raiz quadrada de %.2lf = %.2lf\n",raiz,resultado);
                    }
            }else{
                printf("Selecione uma opcao valida!\n\n");
                goto inicio;
            }

        return 0;
    }