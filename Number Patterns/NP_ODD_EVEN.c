/*
1 3 5 7
2 4 6 8
9 11 13 15
10 12 14 16
*/

//NP_ODD_EVEN(3)
#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  
  int odd=1,even=2;
  
  for(int i=1; i<=n; i++)
  {
    if(i&1==1)
    {
      for(int j=1; j<=n; j++)
      {
        printf("%3d ",odd);
        odd+=2;
      }
    }
    else
    {
      for(int j=1; j<=n; j++)
      {
        printf("%3d ",even);
        even+=2;
      }
    }
    printf("\n");
  }
}
