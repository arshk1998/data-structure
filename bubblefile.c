#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,temp;
	int n=10;
	FILE *fp;
	fp=fopen("abc.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>=a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	fclose(fp);
	FILE *fp1;
	fp1=fopen("sorted.txt", "w");
	for(i=0;i<n;i++)
	{
	
	fprintf(fp1, "%d\t", a[i]);
	}
	fclose(fp1);
	printf("\n\n");
	printf("sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
