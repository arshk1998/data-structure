#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void mergesort(int *ar, int *left,int *right,int ll, int lr,int la )
{
	int i=0,j=0,k=0;
	while(i<=ll&&j<lr)
	{
		if(left[i]<right[j])
		{
			ar[k]=left[i];
			i++;
		}
		else
		{
			ar[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<ll)
	{
		ar[k]=left[i];
		i++;
		k++;
	}
	while(j<lr)
	{
		ar[k]=right[j];
		j++;
		k++;
	}
	

}
void merge(int *ar,int n)
{
	if(n<2){
	
		return;}
		int *left,*right,i,mid;
		mid=n/2;
		left=(int *)malloc(mid*sizeof(int));
		right=(int *)malloc((n-mid)*sizeof(int));
		for(i=0;i<mid+1;i++)
			{
				left[i]=ar[i];
			}
		for(i=0;i<n-mid;i++)
		{
			right[i]=ar[mid+1];
			
		}
		merge(left,mid);
		merge(right,n-mid);
		mergesort(ar,left,right,mid,n-mid,n);
}
int main()
{
		int a[10],n=10,i;
	FILE *fp;
	if(!(fp=fopen("mergefile.txt","r")))
	{printf("Error opening file");
	return -1;
	}
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d",&a[i]);
	}
	
	merge(a,n);
	fclose(fp);
	FILE *fp1;
	fp1=fopen("mergeresult.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(fp1,"%d ",a[i]);
	}
	fclose(fp1);
	for(i=0;i<n;i++){
	
	printf("%d\t",a[i]);
	}
}
