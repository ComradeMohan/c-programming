#include<stdio.h>
void main()
{
	int n,s,f=0,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for( i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  
	printf("Enter number to be searched:");
	scanf("%d",&s);
	for( i=0;i<n;i++)
	{
		if(a[i]==s){
		
			f=1;
			break;
		}

	}
	if(f)
	printf("Element present at %d position ",i+1);
	else printf("Elements is not present");
}//3.13.38