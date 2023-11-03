#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top=-1;
int size;
void main()
{
	printf("Enter stack size:");
	scanf("%d",&size);
	int c,n;
	do
	{
		printf("\n1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				push();
				break;
			case 2:
					pop();
					break;
			case 3:
						display();
						break;
		}
	}while(c!=4);
}
void push()
{
	if(top==size)
	{
		printf("\nOVERFLOW!!!\n");
	}
	else 
	{
		int n;
		printf("\nEnter number to be add :");
		scanf("%d",&n);
		top=top+1;
		stack[top]=n;
	}
}
void pop()
{
	if(top==-1)
	printf("\nUNDERFLOW!!!\n");
	else
		printf("\nPoped out element is :%d",stack[top--]);
}
void display()
{
	for(int i=top;i>=0;--i)
	printf("%d\n",stack[i]);

}
