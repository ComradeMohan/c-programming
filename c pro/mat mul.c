#include<stdio.h>
#include<stdlib.h>
void get_matrix(int a[][10],int r,int c)
{
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
}
void display(int a[][10],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void main()
{
   printf("Enter rows and column for the first matrix: ");
   int r1,c1,r2,c2;
   scanf("%d%d",&r1,&c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);
   if(c1==r2)
   {
   	int a[r1][c1],b[r2][c2];
   	printf("Enter first matrix elements:\n");
   	get_matrix(a,r1,c1);
   	printf("Enter second matrix elements:\n");
   	get_matrix(b,r2,c2);
   	printf("first matrix elements are:\n");
   	display(a,r1,c1);
   	printf("second matrix elements are:\n");
   	display(b,r2,c2);
   	printf("RESULT:\n");
   	mul(a,r1,c1,b,r2,c2);
   }
   else printf("INVALID INPUT");
}
void mul(int a[][10],int r1,int c1,int b[][10],int r2,int c2)
{
	int r[r1][c2];
	
	for(int i=0;i<r1;i++)
	for(int j=0;j<c2;j++)
	r[i][j]=0;
	for(int i=0;i<r1;++i)
	{
		for(int j=0;j<c2;++j)
		{
			for(int k=0;k<c1;k++)
			r[i][j]+=a[i][k]*b[k][j];
			printf("%d\t",r[i][j]);
		}
		printf("\n");
	}
}
