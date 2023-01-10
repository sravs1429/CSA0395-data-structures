#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i,num,pos;
	printf("enter the elements:");
	scanf("%d",&n);
	printf("enter the elemnets:");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=",i);
		scanf("%d",&a[i]);
	}
printf("enter the number to be inserted:");
scanf("%d",&num);
printf("enter the position to be inserted:");
scanf("%d",&pos);
for(i=n-1;i>=pos;i--)
    	a[i+1]=a[i];
    	a[pos]=num;
    	n=n+1;
    	printf("\n array elements after insertion of %d:",num);
	for(i=0;i<n;i++)
	printf("\n a[%d]=%d",i,a[i]);
printf("enter the position to be delete:");
scanf("%d",&pos);
for(i=pos;i<n-1;i++)
    	a[i]=a[i+1];
    	n--;
    printf("\n array elements are");
    for(i=0;i<n;i++)
    printf("\n a[%d]=%d",i,a[i]);
return 0;
}
