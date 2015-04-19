#include <stdio.h>
main()
{
 
    int cod1;
    int cod2;
    int p1;
    int p2;
    float v1;
    float v2;
    float total;
     
     
    scanf("%d", &cod1);
    scanf("%d", &p1);
    scanf("%f", &v1);
    scanf("%d", &cod2);
    scanf("%d", &p2);
    scanf("%f", &v2);
     
     
     
         
         
    total = (p1 * v1) + (p2 * v2);
     
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
}