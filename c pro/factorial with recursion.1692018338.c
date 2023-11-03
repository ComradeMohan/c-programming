#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else if(n>1)
		return n*fact(n-1);
		else return 0;
}
void main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
}