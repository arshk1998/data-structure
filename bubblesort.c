#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i,temp,j,k;
	printf("Enter number of elements(<=20)\n");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(k=0;k<n-1;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
		
		

	printf("Sorted elements are----");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
