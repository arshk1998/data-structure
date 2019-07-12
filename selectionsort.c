// Selection sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,pos,temp,i,j;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("Enter %d integers\n",n);
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for( i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[pos]>=a[j])
			{
				pos=j;
			}
			if(pos!=i)
			{
				temp=a[i];
				a[i]=a[pos];
				a[pos]=temp;
			}
		}}
		printf("Sorted list is--");
		for (i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		
	
	
}
