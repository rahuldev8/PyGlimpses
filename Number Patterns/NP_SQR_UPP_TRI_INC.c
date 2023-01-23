/*
1 2 3 4 5
2 3 4 5 5
3 4 5 5 5
4 5 5 5 5
5 5 5 5 5
*/

//NP_SQR_UPP_TRI_INC(7)
#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  
  int ctr = 1;
  for(int i=1; i<=n; i++)
  {
    ctr=i;
    for(int j=1; j<=n; j++)
    {
      printf("%3d ",ctr);
      ctr++;
      if(ctr>n)ctr=n;
    }
    printf("\n");
  }
}
