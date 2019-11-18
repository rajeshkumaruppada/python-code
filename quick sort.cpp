#include<stdio.h>
int quicksorting(int*,int,int);
void quicksort(int*,int,int);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
void quicksort(int*a,int low,int high)
{
	int pos;
	if(low<high)
	{
		pos=quicksorting(a,low,high);
		quicksort(a,low,pos-1);
		quicksort(a,pos+1,high);
	}
}
int quicksorting(int *a,int low,int high)
{
	int i,j,temp,pivot;
	i=low-1;
	pivot=a[high];
	for(j=low;j<high;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
	}
	temp=a[i+1];
	a[i+1]=a[high];
	a[high]=temp;
	return i+1;
}
