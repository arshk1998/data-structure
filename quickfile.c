#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],n=10,i;
	FILE *fp;
	fp=fopen("abc.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d",a[i]);
	}
	int quicksort(int a[10],int first,int last)	
	{
		int i,j,pivot,temp;	
		if(first<last)
		{
			pivot=first;
			i=first;
			j=last;
			while(i<j)
			{
				while(a[i]<=a[pivot]&&i<=last)
				i++;
				while(a[j]>a[pivot])
				j--;
				if(i<j)
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			temp=a[pivot];
			a[pivot]=a[j];
			a[j]=a[pivot];
			quicksort(a,first,j-1);
			quicksort(a,j+1,last);
		}	
	}
	fclose(fp);
	FILE *fp1;
	fp=fopen("sortedquick.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(fp1, "%d\t", a[i]);
	}
	fclose(fp1);
	printf("\nSORTED LIST IS:   \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
