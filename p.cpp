#include<stdio.h>
#include<stdlib.h>
  
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
  
  
struct node* insert(struct node* root, int data)
{
    if (root == NULL) return createNode(data);
    if (data <= root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);   
 
    return root;
}
int main(){
	struct node *root=NULL;
	int N;
	scanf("%d",&N);
	double x[N];
	for(i=0,i<N;i++)
	{
		insert(root,scanf("%d",x[i]));
	}
	return 0;
}

