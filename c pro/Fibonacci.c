#include<stdio.h>
void main()
{
	int n,a=0,b=1,f=0;
	scanf("%d",&n);
	printf("%d,%d,",a,b);
	for(int i=2;i<=n;i++)
	{
		f=a+b;
		a=b;
		b=f;
		printf("%d,",f);
	}
}//1.49.90 sec