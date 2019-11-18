#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
}*head=NULL,*temp;
void insert_at_begining();
void insert_at_ending();
void dlt_at_begining();
void dlt_at_ending();
void display();
void search();
void size();
int main()
{
	int ch;
	while(1)
	{
		printf("enter the choice :\n");
	    printf("1.insert at begining 2. insert at ending 3.dlt at begining 4.dlt at ending 5.display 6.search 7.size 8.exit\n");
	    scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1: {
	    		insert_at_begining();	
    			break;
    		}
	    	case 2:{
    			insert_at_ending();
    			break;
    		}	
    		case 3:{
    			dlt_at_begining();
    			break;
       		}
    		case 4:{
    			dlt_at_ending();
    			break;
    		}
    		case 5:{
    			display();
    			break;
    		}
    		case 6:{
    			search();
    			break;
    		}
    		case 7: exit(0);
    	}
    }
    return 0;
}
void insert_at_begining()
{
	int value;
	printf("enter the value to insert \n");
	scanf("%d",&value);
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=value;
	temp->prev=NULL;
	if(head==NULL)
		temp->next=NULL;
	else 
	{
		temp->next=head;
		head->prev=temp;
	}
	head=temp;
}
void insert_at_ending()
{
	int value;
	printf("enter the value to insert \n");
	scanf("%d",&value);
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=value;
	struct Node *ptr;
	ptr=head;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	temp->next=NULL;
	temp->prev=ptr;
	ptr->next=temp;
}
void dlt_at_begining()
{
	struct Node *ptr;
	ptr=head;
	printf("the deleted element is %d\n",ptr->data);
	head=head->next;
	head->prev=NULL;
	free(ptr);
}
void dlt_at_ending()
{
	struct Node *ptr;
	ptr=head;
	while(ptr->next!=NULL)
	    ptr=ptr->next;
	printf("the deleted element is %d\n",ptr->data);
	ptr->prev->next=NULL;
	free(ptr);
}
void display()
{
	struct Node *ptr;
	ptr=head;
	printf("the elements are : \n");
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
void size()
{
	int i=0;
	struct Node *ptr;
	ptr=head;
	while(ptr->next!=NULL)
    {
        i++;
	    ptr=ptr->next; 
	}
	printf("%d",i);
}
void search()
{
	int element,i=0;
	printf("enter the element to search :\n");
	scanf("%d",&element);
	struct Node *ptr;
	ptr=head;
	while(ptr->next!=NULL)
	{
		if(ptr->data==element)
	    {
		    i=1;
		    printf("the element is found\n");
	        break;
	    }
		ptr=ptr->next;		
	}
	if(i==0)
	printf("not found\n");
}
