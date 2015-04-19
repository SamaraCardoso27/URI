#include <stdio.h>
 
main()
{
      float A;
      float B;
      double MEDIA;
       
      scanf("%f",&A);
      scanf("%f",&B);
       
      MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
       
      printf("MEDIA = %0.5lf\n",MEDIA);
     
}