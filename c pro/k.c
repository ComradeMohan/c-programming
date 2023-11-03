#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}
void inorder(struct node* node)
{
	if(node==NULL)
	return;
	inorder(node->left);
	printf("%d",node->data);
	inorder(node->right);
}
void preorder(struct node* node)
{
	if(node==NULL)
	return;
	printf("%d",node->data);
	preorder(node->left);
	preorder(node->right);
}
void postorder(struct node* node)
{
	if(node==NULL)
	return;
	postorder(node->left);
	postorder(node->right);
	printf("%d",node->data);
}
void main()
{
	struct node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	 printf("\nInorder traversal \n");
	inorder(root);  printf("\nPreorder traversal \n");

	preorder(root);  printf("\nPostorder traversal \n");

	postorder(root);
}