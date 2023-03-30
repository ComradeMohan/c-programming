#include<stdio.h>
int cube(int n)
{
	return n*n*n;
}
int main()
{
	int n,r;
	printf("Enter a number");
	scanf("%d",&n);
	r=cube(n);
	printf("CUBE:%d",r);
}
