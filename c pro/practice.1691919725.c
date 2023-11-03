#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
}
void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int pi=partition(a,l,h);
		quicksort(a,l,pi-1);
		quicksort(a,pi+1,h);
	}
}
int partition(int a[],int l,int h)
{
	int pivot=a[h];
	int i=l-1;
	for(int j=l;j<h;j++)
	{
		if(a[j]>pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[h]);
	return (i+1);
}
void swap(int* a,int* b)
{
int t=*a;
*a=*b;
*b = t;
}