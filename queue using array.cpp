#include<stdio.h>
#include<stdlib.h>
int queue[50],rear=-1,front=-1,n;
void insert();
void dlt();
void display();
void isfull();
void isempty();
void search();
void size();
int main()
{
	int ch;
	printf("enter the size of the queue\n");
	scanf("%d",&n);
	while(1)
	{
		printf("enter the choice\n");
		printf("1.insert 2.delete 3.display 4.is full 5.is empty 6.search 7.size 8.exit ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();break;
			case 2: dlt();break;
			case 3: display();break;
			case 4: isfull();break;
			case 5: isempty();break;
			case 6: search();break;
			case 7: size();break;
			case 8: exit(0);
		}
	}
	return 0;
}
void insert()
{
	int x;
	if(rear>=n-1)
	{
		printf("the queue is full\n");
	}
	else
	{
		printf("enter the value\n");
		scanf("%d",&x);
		rear++;
		queue[rear]=x;
	}
}
void dlt()
{
	if((front==-1&&rear==-1)||(front==rear))
	    printf("queue is empty\n");
	else 
	{
		front++;
		printf("the deleted element is %d\n",queue[front]);
	}
}
void display()
{
	int i;
	if((front==-1&&rear==-1)||(front==rear))
	 printf("queue is empty\n");
	else 
	{ 
	    printf("the elements are :\n");
    	for(i=front+1;i<=rear;i++)
    	{
	    	printf("%d\n",queue[i]);
    	}
    }
}
void isfull()
{
	if(rear>=n-1)
		printf("the queue is full\n");
	else 
	 printf("queue is not full,you have some space to add element\n");
}
void isempty()
{
	if(front==-1&&rear==-1||front==rear)
	    printf("queue is empty\n");
	else 
	 printf("it contains some elements\n");
}
void search()
{
	int a,b=0,i;
	printf("enter the element to search\n");
	scanf("%d",&a);
	for(i=front+1;i<=rear;i++)
	{
		if(queue[i]==a)
		{
			b=1;
			printf("the element found\n");
			break;
		}
	}
	if(b==0)
	 printf("not found\n");
}
void size()
{
	int i;
	if(front==-1&&rear==-1||front==rear)
	 printf("queue is empty\n");
	else 
	{ 
    	for(i=front+1;i<=rear;i++);
    	printf("the size of queue is %d\n",i);
    }
}
