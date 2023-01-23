/*1
2 1
1 2 3
4 3 2 1
*/

//NP_PYR_ALT_INC_DEC(6)
#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  for(int i=1; i<=n; i++)
  {
      int ctr = 0;
      if(i&1==1)
      {
        ctr=1;
        for(int j=1; j<=i; j++)
        {
          printf("%d ", ctr);
          ctr++;
        }
      }
      else
      {
        ctr=i;
        for(int j=ctr; j>=1; j--)
        {
          printf("%d ", ctr);
          ctr--;
        }
      }
    printf("\n");
  }
}
