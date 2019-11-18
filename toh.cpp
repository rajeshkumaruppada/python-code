#include<stdio.h>
#include<conio.h>
void toh(int,char,char,char);
int main()
{
	int n;
	char s='s',a='a',d='d';
	printf("enter no of disks:");
	scanf("%d",&n);
	toh(n,s,a,d);
	getch();
	return 0;
}
void toh(int n,char s,char a,char d)
{
	if(n>=1)
	{
		toh(n-1,s,d,a);
		printf("move disc %d from %c to %c \n",n,s,d);
		toh(n-1,a,s,d);
	}
}
