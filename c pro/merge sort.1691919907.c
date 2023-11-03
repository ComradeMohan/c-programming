#include<stdio.h>
void swap(int* a,int* b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int a[],int lb,int ub)
{
	int p=a[lb];
	int s=lb,e=ub;
	while(s<e)
	{
		while(a[s]<=p)
		s++;
		while(a[e]>p)
		e--;
		if(s<e)
		swap(&a[s],&a[e]);
	}
	swap(&a[s],&a[e]);
	return e;
}
void sort(int a[],int lb,int ub)
{
	printf("SORTING:\n");
	if(lb<ub)
	{
		int i=partition(a,lb,ub);
		sort(a,lb,i-1);
		sort(a,i+1,ub);
	}
}
void main()
{
	int n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,0,n-1);
	printf("Elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}