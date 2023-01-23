/*
*********
**       **
* *     * *
*  *   *  *
*    *    *
*  *   *  *
* *     * *
**       **
*********

*/

#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  for(int i=1; i<=n*2-1; i++)
  {
    for(int j=1; j<=n*2-1; j++)
    {
      if(i==j || i+j==n*2 || i==1 || i==n*2-1 || j==1 || j==n*2-1)
        printf("*");
      else 
        printf(" ");
    }
    printf("\n");
  }
}
