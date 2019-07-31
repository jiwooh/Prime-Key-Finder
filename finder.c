#include <stdio.h>

int main()
{
  int i, k, a, b;
  int minnum;
  int maxnum;
  float n;
  int found = 0;

  printf("Give the key of ");
  scanf("%d", &i);
  if (i<2) {return 0;}

  printf("Search from where to where? (integer)\n");
  scanf("%d", &minnum);
  printf("to\n");
  scanf("%d", &maxnum);

  for (k=minnum; k<=maxnum; k++)
  {
    a=i-k;
    b=i-10*k;
    n=(double)a/(double)b;
      
    printf("When k=%d, a=%d, b=%d, so n=%.3f\n", k, a, b, n);
      
    if (n!=0 && n!=1 && n!=-1 && n/1.00 == (int)n)
    {
      if (n>i/2) {n-=i;}
      printf("\n★ For k=%d, %d's key is %d :)", k, i, (int)n);
      found=1;
      break;
    }
    /* else
    {
      printf("\n");
    } */
  }
  if (found!=1)
  {
    printf("None found in %d to %d :(", minnum, maxnum);
  }
  return 0;
}
