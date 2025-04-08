#include<stdio.h>

int main()
  {
  int dia, mes, ano, valido = 0;

  printf("Digite o dia do seu nascimento: \n");
  scanf("%d",&dia);

  printf("Digite o mes do seu nascimento: \n");
  scanf("%d",&mes);

  printf("Digite o ano do seu nascimento: \n");
  scanf("%d",&ano);

  if((mes < 1) || (mes > 12))
    {
    printf("Mes invalido\n");
    valido++;
    }

  if(mes == 2)
  {
    if((dia > 28) || (dia < 1))
      {
      printf("Dia invalido\n");
      valido++;
      }
  }

  if((((((mes == 1) || (mes == 3)) || (mes == 5)) || ((mes == 7) || (mes == 8))) || ((mes == 10) || (mes == 12))))
    {
    if((dia > 31) || (dia < 1))
      {
      printf("Dia invalido\n");
      valido++;
      }	      
    }

  if(((mes == 4) || (mes == 6)) || ((mes == 9) || (mes == 11)))
    {
    if((dia < 1) || (dia > 30))
      {
      printf("Dia invalido\n");
      valido++;
      }	      
    }	    

  if((ano < 1) || (ano > 2025))
    {
    printf("Ano invalido\n");
    valido++;
    }	    

  if(valido == 0)
    {
    printf("Data valida\n");
    }	    

  return 0;
  }  
