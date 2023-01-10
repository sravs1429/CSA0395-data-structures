#include<stdio.h>
int main()
{
	int a[100],search,c,num;
	printf("enter the number of elements:");
	scanf("%d",&num);
	printf("enter the elements:");
	for(c=0;c<num;c++)
		scanf("%d",&a[c]);
	printf("enter the number to be searched:");
	scanf("%d",&search);
	for(c=0;c<num;c++)
	{
		if(a[c]==search)
		{
			printf("%d is present at location %d\n",search,c+1);
			break;
		}
	}
	if(c==num)
	{
		printf("%d is not preasent in array\n",search);
	}
	return 0;
}
