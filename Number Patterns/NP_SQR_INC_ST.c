/*
1 2 3 4
2 3 4 5
3 4 5 6
 4  5  6  7
 */

//NP_SQR_INC_ST (1)
#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  int ctr=1;
  for(int i=1; i<=n ; i++)
  {
    ctr=i;
    for(int j=1; j<=n; j++)
    {
      printf("%2d ",ctr);
      ctr++;
    }
    printf("\n");
  }
}
