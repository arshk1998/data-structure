#include<stdio.h>
#include<conio.h>
void mergesort(int[],int,int,int);
void partition(int [], int,int);
int main()
{
	int a[20],i,size;
	printf("Enter total number of elements: ");
	scanf("%d",&size);
	printf("Enter the elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	partition(a,0,size-1);
	printf("After merge sort:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
void partition(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
		mergesort(a,low,mid,high);
	}
}
void mergesort(int a[],int low,int mid,int high)
{
	int i,mi,k,lo,temp[20];
	lo=low;
	i=low;
	mi=mid+1;
	while((lo<=mid)&&(mi<=high))
	{
		if(a[lo]<=a[mi])
		{
			temp[i]<=a[lo];
			lo++;
		}
		else
		{
			temp[i]=a[mi];
			mi++;
		}
		i++;
	}
	if(lo>mid)
	{
		for(k=mi;k<=high;k++)
		{
			temp[i]=a[k];
			i++;
		}
	}
	else
	{
		for(k=lo;k<=mid;k++)
		{
			temp[i]=a[k];
			i++;
		}
	}
	for(k=low;k<=high;k++)
	{
		a[k]=temp[k];
	}
}
