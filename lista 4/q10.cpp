#include <stdio.h>

int fatorial(int aux)
  {
    int j, fat = 1;
    for(j = aux; j>1;j--)
      {
        fat = fat*j;
      }
    return fat;
  }

void calculo_vetor_fatorial(int vet[])
 {
 	int i, fato[10];
    for(i = 0; i<10;i++)
    {
      fato[i] = fatorial(vet[i]);
    }
    
  for(i = 0;i<10;i++)
    {
      printf("\n%d\n", fato[i]);
    }
 }
 
 
int main()
{
  int vet[10], i;
  printf("Digite dez valores inteiros :\n");
  for(i = 0;i<10;i++)
    {
      scanf("%d", &vet[i]);
    }
  calculo_vetor_fatorial(vet);
  return 0;
}
