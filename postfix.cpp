#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void push(int);
int pop();
int stack[10],top=-1;
int i,x,y,p;
int main()
{
	char a[10];
	printf("enter the string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	
	x=0;
	y=0;
	switch(a[i])
	{
		case '0':push(0);
		break;
		case '1':push(1);
		break;
		case '2':push(2);
		break;
		case '3':push(3);
		break;
		case '4':push(4);
		break;
		case '+':x=pop();
		y=pop();
		push(x+y);
		break;
		case '-':x=pop();
		y=pop();
		push(y-x);
		break;
		case '*':x=pop();
		y=pop();
		push(x*y);
		break;
	}
}
	p=pop();
	printf("%d",p);
	getch();
	return 0;
	
}
void push(int n)
{
	if(top==9)
	printf("stack full");
	else
	{	
	top++;
	stack[top]=n;
    }
	
}
int pop()
{
	int c;
	if(top==-1)
	printf("empty");
	else
	{
	
	c=stack[top];
	top--;
	return c;
}
}
