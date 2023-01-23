/*
1 1 1 1 1 1 1 1 1 2
3 2 2 2 2 2 2 2 2 2
3 3 3 3 3 3 3 3 3 4
5 4 4 4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5 6
7 6 6 6 6 6 6 6 6 6
7 7 7 7 7 7 7 7 7 8
9 8 8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 910

*/

//Number Pattern-LtoRtoL(5)

#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  
  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=n+1; j++)
    {
      if(i%2==1 && j==n+1)
        printf("%2d ", i+1);
        
      else if(i%2==0 && j==1)
        printf("%2d ", i+1);
      else 
        printf("%2d ", i);
    }
    printf("\n");
  }
}
