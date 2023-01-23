/*
1 2 3 4 5 

2 3 4 5 5 

3 4 5 5 5

4 5 5 5 5

5 5 5 5 5

*/

#include<stdio.h>
int main()
{  
  int n;  
  scanf("%d",&n);
  for(int i=1; i<=n; i++)  
  {    
    int ctr=i;    
    for(int j=1; j<=n; j++)    
    {
      printf("%d ",ctr);      
      ctr++;      
      if(ctr>n)ctr=n;    
    }    
    printf("\n"); 
  }
}
