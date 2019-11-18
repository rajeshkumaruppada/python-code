#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
int stack[10],top=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("1.push 2.pop 3.display 4.exit:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			default:exit(0);
			break;
		}
	}
	getch();
	return 0;
}
void push()
{
	int num;
	if(top==10-1)
	printf("stack overflow");
	else
	{
	  printf("enter the element to be inserted");
	  scanf("%d",num);
	  stack[top]=num;
	  top++;
    }
	
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow");		
	}
	else
	{
		printf("deleted element is %d",stack[top]);
		top--;
	}
}
void display()
{
	int i;
   if(top==-1)
   printf("no elements to display");
   else
   {
   for(i=top;i<=0;i--)
   printf("%d\n",stack[top]);
}
}





