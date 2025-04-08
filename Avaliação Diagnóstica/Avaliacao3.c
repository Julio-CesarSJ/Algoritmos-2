#include<stdio.h>

int main()
  {
  int Num, fatorial = 1;

  printf("Digite um numero: \n");
  scanf("%d",&Num);

  for(int i = 1; i <= Num; i++)
    {
    fatorial *= i;
    }	    

  printf(" %d! == %d\n",Num,fatorial);

  return 0;
  }	  
