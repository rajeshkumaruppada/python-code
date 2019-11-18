#include<stdio.h>
#include<conio.h>
void quicksort(int,int);
int partition(int,int);
int a[100];
int main()
{
	int i,n,p,q;
	printf("no of elements:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	p=0;
	q=n-1;
	quicksort(p,q);
	printf("Sorted list:");
	for(i=0;i<n;i++)
	printf("%d",&a[i]);
	return 0;
}
void quicksort(int p,int q)
{
	int k;
	k=partition(p,q);
	quicksort(p,k-1);
	quicksort(k+1,q);
}
int partition(int p,int q)
{
	int v,i,t,j;
	v=a[p];
	i=p;
	j=q;
	while(i<j)
	{
		while(a[i]<=v)
		i=i+1;
		while(a[j]>v)
		j=j-1;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[p]=a[j];
	a[j]=v;
	return j;
}


