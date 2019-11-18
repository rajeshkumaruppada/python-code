#include<stdio.h>
int main()
{
	int i,j,k,n,a[50],mid,flag=0;
	printf("enter the size of list(<50)\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	printf("enter the value to search :\n");
	scanf("%d",&k);
	i=0;
	j=n-1;
	while(i<=j&&k<=a[j]&&k>=a[i])
	{
		if(i<=j)
		{
		    mid=i+((k-a[i])*(j-i)/(a[j]-a[i]));
    		if(a[mid]==k)
	    	{
	    		printf("element found.\n");
	    		flag=1;
	    		break;
	    	}
	    	if(k<a[mid])
	    	{
	    		j=mid+1;
			}
			if(k>a[mid])
			{
				i=mid-1;
			}
	    }
	}
	if(flag==0)  
	  printf("element not found\n");
	return 0;
}
