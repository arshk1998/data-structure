#include<stdio.h>
#include<conio.h>
void selectionsort(int a[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for( j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
	}
		//if(min!=i){
		
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;//}
	}//}
}
int main()
{
	int a[10],n=10,i;
	FILE *fp;
	if(!(fp=fopen("selectfile.txt","r")))
	{printf("Error opening file");
	return -1;
	}
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d",&a[i]);
	}
	fclose(fp);
	selectionsort(a,n);
	
	FILE *fp1;
	fp1=fopen("result.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(fp1,"%d ",a[i]);
	}
	fclose(fp1);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	}
