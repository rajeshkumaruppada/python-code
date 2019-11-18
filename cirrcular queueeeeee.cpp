#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void insert();
void deleted();
void display();
int queue[5],c=0,rear=-1,front=0;
int main()
{
	int ch;

	
	while(1)
	{
	printf("choice 1.insert 2.delete 3.display::");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:insert();
		break;
		case 2:deleted();
		break;
		case 3:display();
		break;
		case 4:exit(0);
		break;
	}
}
return 0;
}
void insert()
{
	int data;
	if(c==5)
	{
		printf("queue is full:");
		
	}
	else
	{
		printf("enter the element:");
		scanf("%d",&data);
		rear=(rear+1)%5;
		queue[rear]=data;
		c++;
	}
}
void deleted()
{
	if(c==0)
	printf("queue is empty");
	else
	{
		printf("deleted element is %d",queue[front]);
		front=(front+1)%5;
		c--;
	}
}
void display()
{
	int i;
	if(c==0)
	printf("queue is empty");
	else
	{
	for(i=0;i<c;i++)
	printf("%d",queue[i]); 
    }
}
