/*
1 2 3 4 5
2 3 4 5 1
3 4 5 1 2
4 5 1 2 3
5 1 2 3 4
*/

//NP_SQR_INC_ST_CIRC(2)
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  
  int ctr=1;
  
  for(int i=1; i<=n; i++)
  {
    ctr=i;
    for(int j=1; j<=n; j++)
    {
      printf("%2d ",ctr);
      ctr++;
      if(ctr>n)ctr=1;
    }
    printf("\n");
  }
}
