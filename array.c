#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int A[100],i,UB,item,k,exit_main;
void traverse();
void insert();
void del();
void max();
void reverse();
int main()
{
	printf("Enter the Array size less than 100: ");
	scanf("%d",&UB);
	printf("Enter the elements in array: \n");
	for(i=0;i<UB;i++)
	{
		scanf("%d",&A[i]);
	}
	menu();
}
void menu()
{
	int ch;
	printf("\n1.traverse the array\n2.insert an element in an array\n3.deletion from an array\n4.find maximum element from an array\n5.to reverse an array\n");
	printf("\nnow enter your choice.........!!\n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				traverse();
				break;
			case 2:
				insert();
				break;
			case 3:
				del();
				break;
			case 4:
				max();
				break;
			case 5:
				reverse();
				break;
			case 6:
				exit(1);
				break;
			default:
				printf("\nplease enter the correct choice(1-6)");
		}
}
void traverse()
{
	printf("===============================================================================");
	printf("\n\t\t\t   The Traverse of array is\n");
	printf("===============================================================================");
	for(i=0;i<UB;i++)
	{
		printf("\n%d",A[i]);
	}
	printf("\nenter 1 to go to main menu ,0 to exit\n");
	scanf("%d",&exit_main);
	if(exit_main==1)
	{
	    system("cls");
		menu();
	}
	else if(exit_main==0)
		exit(1);
	else
	 	printf("\nplease choose from 0 or 1");
}
void insert()
{
	printf("\n===============================================================================");
	printf("\n\t\t\t    insertion in an  array ");
	printf("\n===============================================================================");
	printf("\nEnter element to be insert : ");
	scanf("%d",&item);
	printf("At which position (Enter index number) ? ");
	scanf("%d",&k);
	// now create a space at the required position
	for(i=UB; i>k; i--)
	{
		A[i]=A[i-1];
	}
	A[k]=item;
	printf("Element inserted successfully..!!\n");
	scanf("Now the new array is : \n");
	for(i=0; i<UB+1; i++)
	{
		printf("%d ",A[i]);
	}
	printf("\nenter 1 to go to main menu,0 to exit\n");
	scanf("%d",&exit_main);
	if(exit_main==1)
	{
	    system("cls");
		menu();
	}
	else if(exit_main==0)
		exit(1);
	else
	 	printf("\nplease choose from 0-1");
}
void del()
{
	printf("\n===============================================================================");
	printf("\n\t\t\t    deltion in an  array ");
	printf("\n===============================================================================");
	printf("Enter the location where you wish to delete element\n");
   scanf("%d", &k);
   if (k>= UB+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = k - 1; i < UB - 1; i++)
         A[i] = A[i+1];
 
      printf("Resultant array:\n");
 
      for (i = 0; i < UB - 1; i++)
         printf("%d\n",A[i]);
        printf("\nenter 1 to go to main menu,0 to exit\n");
	scanf("%d",&exit_main);
	if(exit_main==1)
	{
	    system("cls");
		menu();
	}
	else if(exit_main==0)
		exit(1);
	else
	 	printf("\nplease choose from 0-1");
}
}
void max()
{
	int m;
	printf("\n===============================================================================");
	printf("\n\t\t\t   maximum element in an  array ");
	printf("\n===============================================================================");
	m= A[0];
    for(i=1;i<UB;i++)
  {
    if (A[i]>m)
    {
       m=A[i];
	   k=i+1;
    }
  }
 
  printf("Maximum element is present at location %d and it's value is %d.\n", k, m);
  printf("\nenter 1 to go to main menu,0 to exit\n");
	scanf("%d",&exit_main);
	if(exit_main==1)
	{
	    system("cls");
		menu();
	}
	else if(exit_main==0)
		exit(1);
	else
	 	printf("\nplease choose from 0-1");
}
void reverse()
{
	int j,Temp;
	printf("\n===============================================================================");
	printf("\n\t\t\t  elements in reverse order in an  array ");
	printf("\n===============================================================================");
	j = UB- 1;   // Assigning j to Last array element
    i = 0;       // Assigning i to first array element
    while (i < j) 
    {
      Temp = A[i];
      A[i] = A[j];
      A[j] = Temp;
      i++;             
      j--;         
    }
    printf("\nResult of an Reverse array is: ");
    for (i = 0; i < UB; i++) 
    {
    	  printf("%d \t", A[i]);
    }
	printf("\nenter 1 to go to main menu,0 to exit\n");
	scanf("%d",&exit_main);
	if(exit_main==1)
	{
	    system("cls");
		menu();
	}
	else if(exit_main==0)
		exit(1);
	else
	 	printf("\nplease choose from 0-1");
}

