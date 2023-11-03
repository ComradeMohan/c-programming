#include<stdio.h>
	int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
void main()
{
	int n;
	scanf("%d",&n);
	printf("%d",Fibonacci(n));}