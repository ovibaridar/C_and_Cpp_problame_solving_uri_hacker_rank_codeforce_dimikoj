#include<stdio.h>
int main()
{
  float a;
  scanf("%f",a);
  if(a>25 && a<=50)
  {
      pritf("Intervalo (25,50]");
  }
  else if(a>=25 && a<=100)
  {
      if(a>=0 && a<=25)
      {
          printf("Intervalo [0,25]");
      }
      else if (a>75 && a<=100)
      {
          printf("Intervalo (75,100]");
      }
  }
  else
  {
      printf("Fora de intervalo");
  }
  return 0;
}
