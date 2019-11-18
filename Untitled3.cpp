#include<stdio.h>
#include<stdlib.h>
int x;
struct node{
	int data;
	struct node* left;
	struct node* right;
}*root=NULL,*newnode,*ptr;
void insert(node *root,int x);
int createnewnode(int );
void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ->", root->data);
    inorder(root->right);
}

int main()
{
	int N,i=0;
	scanf("%d",&N);
	while(i<N)
	{
		printf("enter the elements\n");
		scanf("%d",&x);
		insert(root,x);
		i++;
	}
	inorder(root);

}
void insert(node *root,int x)
{
	if(root==NULL)
	{
		createnewnode(x);
	}
	if(x<=root->data)
	{
		ptr=root;
		ptr->left->data=x;
	}
	if(x>root->data)
	{
		ptr=root;
		ptr->right->data=x;
	}
}
int createnewnode(int x)
{
	root->data=x;
	root->left=NULL;
	root->right=NULL;
	printf("%d",root->data);
}
