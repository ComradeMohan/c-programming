#include<stdio.h>
struct book
{
	char title[50],author[50];
	float price;
};
int main()
{
	struct book s;
	printf("Enter the informtion of the books:\n\n");
	printf("Enter Title : ");
	scanf("%s",s.title);
	scanf("%s",s.author);
	printf("Enter price : ");
	scanf("%s",s.price);
	printf("\nDisplaying Information\n");
	printf("Author: %d\n",s.author);     
	printf("Title: %s\n",s.title);
	printf("price: %.2f\n",s.price);
	return 0;	
}