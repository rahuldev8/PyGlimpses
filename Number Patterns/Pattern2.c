/*
1 2 3 4 5
2 3 4 5 1
3 4 5 1 2
4 5 1 2 3
5 1 2 3 4
*/

#include<stdio.h>
int main()
{  int n;  
 scanf("%d",&n);
 for(int i=1; i<=n; i++)  
 {    
   int ctr=i;    
   for(int j=1; j<=n; j++)    
   {      
     printf("%d ",ctr);      
     ctr++;      
     if(ctr>n)ctr=1;    
   }    
   printf("\n");  
 }  
 return 0;
}
