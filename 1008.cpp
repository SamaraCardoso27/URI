#include <stdio.h>
 
main()
{
  int funcionario;
  int horas;
  double valor;
  double salario;
   
   
  scanf("%d", &funcionario);
  scanf("%d", &horas);
  scanf("%lf", &valor);
   
  salario = (horas * valor);
   
  printf("NUMBER = %d\n",funcionario);
  printf("SALARY = U$ %.2lf\n",salario);
   
   
}