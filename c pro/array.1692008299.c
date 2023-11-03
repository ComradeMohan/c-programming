#include<stdio.h>
int n;
void main()
{
	int c;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[100];
	printf("Enter elements:\n");
	for(int i=0;i<n;i++)
	  scanf("%d",&a[i]);
	printf("\n1)INSERTION\n2)DELETION\n3)DISPLAY\n4)EXIT\nEnter your choice:");
	scanf("%d",&c);
	while(c!=4)
	{
	switch(c)
	{
			case 1: 
			printf("Enter position and data : ");
			int d,p;
			scanf("%d%d",&p,&d);
			insert(a,p,d);
	printf("\n1)INSERTION\n2)DELETION\n3)DISPLAY\n4)EXIT\nEnter your choice:");
	scanf("%d",&c);
			break;
			case 2:
				printf("Enter number position to be deleted:");
				int de;
				scanf("%d",&de);
				delete(a,de);
	printf("\n1)INSERTION\n2)DELETION\n3)DISPLAY\n4)EXIT\nEnter your choice:");
	scanf("%d",&c);
			break;
			case 3:
				display(a,n);
	printf("\n1)INSERTION\n2)DELETION\n3)DISPLAY\n4)EXIT\nEnter your choice:");
	scanf("%d",&c);
	}
	}
}
void insert(int b[],int p,int d)
{
	for(int i=n;i>=p;i--)
	b[i+1]=b[i];
	b[p]=d;
	n++;
}
void delete(int a[],int d)
{
	for(int i=d;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	--n;
}
void display(int b[])
{
	for(int i=0;i<n;i++)
	printf("%d, ",b[i]);
	printf("\n");
}