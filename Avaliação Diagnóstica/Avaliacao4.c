#include<stdio.h>

int main()
  {
  int a, b, c, d, e, pare = 0, pare2 = 0, i = 0, j, maior;

  printf("Digite um valor para a: \n");
  scanf("%d",&a);

  printf("Digite um valor para b: \n");
  scanf("%d",&b);

  printf("Digite um valor para c: \n");
  scanf("%d",&c);

  printf("Digite um valor para d: \n");
  scanf("%d",&d);

  printf("Digite um valor para e: \n");
  scanf("%d",&e);

  printf("Ordem crescente: ");

  while(pare != 5)
    {  
      if(i == a)
        {
        printf(" %d ",a);
	pare++;
        }
      if(i == b)
        {
        printf(" %d ",b);
	pare++;
        }      
      if(i == c)
        {
        printf(" %d ",c);
	pare++;
        }      
      if(i == d)
        {
        printf(" %d ",d);
	pare++;
        }
      if(i == e)
	{
        printf(" %d ",e);
	pare++;
	} 
      i++; 
      maior = i;   
    }	    

  printf("\nOrdem decrescente: ");

  j = maior;

  while(pare2 != 5)
    {
      if(j == a)
        {
        printf(" %d ",a);
        pare2++;      
        }
      if(j == b)
        {
        printf(" %d ",b);
        pare2++;
        }
      if(j == c)
        {
        printf(" %d ",c);
        pare2++;
        }
      if(j == d)
        {
        printf(" %d ",d);
        pare2++;
        }
      if(j == e)
        {
        printf(" %d ",e);
        pare2++;
        }
      j--;
    }

  printf("\n");

  return 0;
  }	  
