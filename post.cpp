#include<stdio.h>
char exp[20];
int post[20],i,number,result;
int top=-1;
int isoperand();
int push(int );
int pop();
int main()
{
	int a,b,ch;
	printf("enter the expresion :\n");
	scanf("%s",&exp);
	for(i=0;exp[i]!='\0';i++)
	{
		ch=exp[i];
		if(isoperand(ch))
		{
			if(isoperand(ch)==1)
			{
				push(ch);
			}
		}
		else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/')
		{
			b=pop();
			a=pop();
			switch(exp[i])
			{
				case '+': result=a+b;
				break;
				case '-': result=a-b;
				break;
				case '*': result=a*b;
				break;
				case '/': result=a/b;break;
			}
			push(result);
		}
    }
	
}
int isoperand()
{
	for(i=0;i!='\0';i++)
	{
		if(exp[i]>=0&&exp[i]<=9)
		{
	        return 1;
		}	
	}
	
}
int push(int )
{
	top++;
	number=exp[i];
	post[top]=number;
}
int pop()
{
	if(top>-1)
	{
		number=post[top];
		top--;
		return number;
	}
}
