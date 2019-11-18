#include<stdio.h>
#include<stdlib.h>

int stack[50],top=-1,n;
void push();
void pop();
void display();
void isfull();
void isempty();
int search(int );
void size();
int main()
{
	int ch,z,a;
	printf("enter the size of the stack\n");
	scanf("%d",&n);
	while(1)
	{
		printf("enter the choice\n");
	    printf("1.push 2.pop 3.display 4.is full 5.is empty 6.search 7.size 8.exit\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1: {
	    		push();
				break;
			}
	    	case 2: {
	    		pop();
				break;
			}
	    	case 3: {
	    		display();
				break;
			}
	    	case 4: {
	    		isfull();
				break;
			}
	    	case 5: {
	    		isempty();
				break;
			}
			case 6: {
				printf("enter the element to search\n");
				scanf("%d",&a);
				z=search(a);
				if(z==1)
				    printf("element found\n");
				else
				    printf("NOT FOUND\n");    
				break;
			}
			case 7:size();break;
	    	case 8: exit(0);
		} 
	}
	return 0;
}
void push()
{
	int x;
	if(top>=n-1)
	{
		printf("stack is full\n");
	}
	else
	{
	    printf("enter the value to insert\n");
    	scanf("%d",&x);
    	top++;
    	stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("stack is empty\n");
	} 
    else
	{
		printf("the poped element is %d \n",stack[top]);
	    top--;
	}
}
void display()
{
	int i;
	if(top<=-1)
	    printf("stack is empty\n");
	else
	{   
	printf("the elements are :\n");
	for(i=0;i<=top;i++)
	{
		printf("%d\n",stack[i]);
	}
    }
}

void isempty()
{
	if(top<=-1)
	    printf("stack is empty\n");
    else 
        printf("stack contain elements\n");
}
void isfull()
{
	if(top>=n-1)
	    printf("stack is full\n");
	else 
	    printf("stack is not full\n");
}
int search(int b)
{
	int i;
	for(i=0;i<=top;i++)
	{
		if(stack[i]==b)
		{
			return 1;
			break;
		}
	}
}
void size ()
{
	int i;
	for(i=0;i<=top;i++);
	printf("%d",i);
}
