#include<stdio.h>
long int Fib(long int x)
{
 if(x==0)
   return 0;
 if(x==1)
   return 1;
 else
   return Fib(x-1)+Fib(x-2);
}

void main()
{
   int n,i;   
   printf("plaese input n(n>1):");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     printf("%d",Fib(i));
}
