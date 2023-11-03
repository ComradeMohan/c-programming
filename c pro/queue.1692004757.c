#include<stdio.h>
#include<stdlib.h>
int queue[100],rear=-1,size,front=-1;
void main()
{
	printf("Enter the size of array:");
	scanf("%d",&size);
	int c;
	do
	{
		printf("\n1)ENQUEUE\n2)DEQUEUE\n3)DISPLAY\n\nEnter your choice :");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
				case 3:
					display();
					break;
					default :
						printf("\nINVALID CHOICE \n");
		}
	}while(c!=4);
}
void enqueue()
{
	if(rear==size-1)
	printf("\nOVERFLOW\n");
	else
	{
		if(front==-1)
		front=0;
		int x;
		printf("Enter number to be added:");
		scanf("%d",&x);
		rear	=rear+1;
		queue[rear]=x;
	}
}
void dequeue()
{
	if(front==-1||front>rear){
	printf("\nUNDERFLOW!!!\n");}
	else
	{
		printf("Dequeued element : %d",queue[front]);
		front++;
	}
}
void display()
{
	if(front<=rear)
	for(int i=front	;i<=rear;i++)
	printf("%d\t",queue[i]);
	else
	printf("QUEUE IS EMPTY!!!");
}