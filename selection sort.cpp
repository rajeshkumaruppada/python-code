#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,min,n,x,a[100];
	printf("enter size");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		min=a[i];
		x=i;	
		for(j=i+1;j<n;j++)
		{
			if(a[j]<=min)
			{
				min=a[j];
				x=j;
			}
		}
		k=a[i];
		a[i]=a[x];
		a[x]=k;
	}
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	getch();
	return 0;
}
