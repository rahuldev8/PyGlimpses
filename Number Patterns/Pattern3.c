/*
01

02 06

03 07 10

04 08 11 13

05 09 12 14 15

*/

#include<stdio.h>
int main()
{  
  int n;  
  scanf("%d",&n);
  int ctr=1;
  for(int i=1; i<=n; i++)
  {    
    ctr=i;    
    for(int j=1; j<=i; j++)    
    {      
      printf("%.2d ",ctr);      
      //if(j==1)ctr++;              
      ctr+=(n-j);    
    }
    printf("\n");
    }
}
