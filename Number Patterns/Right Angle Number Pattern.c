/*
 1
 2 4
 1 3 5
 2 4 6 8
 1 3 5 7 9*/
 
 //Right Angle Number Pattern(4)
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  
  int odd=1,even=2;
  
  for(int i=1; i<=n; i++)
  {
    if(i&1==1)
    {
      odd=1;
      for(int j=1; j<=i; j++)
      {
        printf("%2d ",odd);
        odd+=2;
      }
    }
    else
    {
      even=2;
      for(int j=1; j<=i; j++)
      {
        printf("%2d ",even);
        even+=2;
      }
    }
    printf("\n");
  }
}
