#include<stdio.h>
void main()
{
	int n,i,s,f=0,mid;
	printf("Enter numbetr of elements in an  array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter number to be searched:");
	scanf("%d",&s);
	int l=0,r=n-1;
	while(l<=r)
	{
		mid = l + (r - l) / 2;
		if(a[mid]==s)
		{
			f=1;
			break;
		}
		if(a[mid]<s)
		l=mid+1;
		else r=mid-1;
	}
	
	if(f)
	printf("Element present at %d position ",mid+1);
	else printf("Elements is not present");
}