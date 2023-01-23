/*
    *
   ***
  *****
 *******
*********

*/

#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int cnt=1;
  for(int i=1; i<=n; i++)
  {
    for(int s=1; s<=n-i; s++)
    {
      printf(" ");
    }
    for(int j=1; j<=cnt; j++)
    {
      printf("*");
    }
    cnt+=2;
    printf("\n");
  }
}
