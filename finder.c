#include <stdio.h>

int main()
{
  int i, k, a, b;
  int minnum = -10;
  int maxnum = 10;
  float n;
  scanf("%d", &i);
  if (i<2) {return 0;}
  for (k=minnum; k<=maxnum; k++)
  {
    a=i-k;
    b=i-10*k;
    n=(double)a/(double)b;
      
    printf("When k=%d, a=%d, b=%d, so n=%.3f\n", k, a, b, n);
      
    if (n!=0 && n!=1 && n!=-1 && n/1.00 == (int)n)
    {
      if (n>n/2) {n-=i;}
      printf("For k=%d, %d's key is %d!", k, i, (int)n);
      break;
    }
    else
    {
      printf("\n");
    }
  }
  
  return 0;
}
