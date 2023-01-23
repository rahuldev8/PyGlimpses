/*
*********
 *******
  *****
   ***
    *
*/

#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  for(int i=n; i>=1; i--)
  {
    for(int s=i; s<n; s++)
    {
      printf(" ");
    }
    for(int j=1; j<=2*i-1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
