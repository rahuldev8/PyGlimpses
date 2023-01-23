/*
*        *
 *      *
  *    *
   *  *
     *
   *  *
  *    *
 *      *
*        *
*/

#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  int sum = n*2;
  
  for(int i=1; i<=sum-1; i++)
  {
    for(int j=1; j<=sum-1; j++)
    {
      if(i==j||i+j==sum)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
