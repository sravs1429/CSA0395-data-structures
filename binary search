#include<stdio.h>
#include<conio.h>
int main()
{
	int first,last,middle,n,search,a[100],i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	printf("enter the value to be searched:");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(a[middle]<search)
		    first=middle+1;
		else if(a[middle]==search)
		{
		    printf("%d is found at location %d\n",search,middle+1);
		    break;
	    }
		else
		    last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	     printf("not found! %d is not present in list\n",search);
	return 0;
	
}
