/*
1 

2 1 

1 2 3 

4 3 2 1

*/

#include<stdio.h>
int main()
{
  int n;  
  scanf("%d",&n);
  for(int i=1; i<=n; i++)  
  {    
    int ctr=1;
    if(i&1==1)    
    {      
      for(int j=1; j<=i; j++)        
        printf("%d ",j);    
    }    
    else    
    {      
      for(int j=i; j>0; j--)        
        printf("%d ",j);    
    }    
    printf("\n");  
  }
}
