#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
main()
{
      char nome[20];
      double salario;
      double vendas;
      double total; 
       
      gets(nome);
      scanf("%lf",&salario);
      scanf("%lf",&vendas);
       
       
      total = ((vendas) * 0.15) + salario  ;  
       
      printf("TOTAL = R$ %.2lf\n",total);
 
       
}