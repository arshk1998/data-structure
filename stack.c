#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
typedef struct
{
	int s[max];
	int top;
}stack;
int main()
{
	stack s1;
	int ch,item;
	void create(stack*);
	void push(stack*,int);
	int pop(stack*);
	int peek(stack*);
	int isempty(stack*);
	void display(stack*);
	create(&s1);
	while(1)
	{
		printf("choice\n1.Push\n2.Pop\n3.Peek\n4.Exit");
		printf("Enter choice:\n");
		scanf("%d"&ch);
		switch(ch)
		{
			case 1:
				printf("Enter element to push: \n");
				scanf("%d",&item);
				push(&s1,item);
				break;
			case 2:
				if(isempty(&s1)==1)
				printf("Underflow:stack empty");
				else
				{
					item=pop(&s1);
					printf("Element popped= %d\t",item);
				}
				break;
				case 3:
					if(isempty(&s1)==1)
				printf("Underflow:stack empty");
				else
				{
					item=peek(&s1);
					printf("Element at top= %d\t",item);
				}
				break;
				case 4:
					display(&s1);
					break;
					case 5:
						exit(0);
		}
	}
}
void create(stack* sp)
{
	sp->top=-1;
}
int isempty(stack *sp)
{
	return(sp->top==1);
}
void push(stack *sp,int item)
{
	if(sp->top==max-1)
	printf("Overflow");
	else
	{
		sp->top++;
		sp->s[top]=item;
	}
}
int pop(stack *sp)
{
	int item;
	item=sp->s[top];
	sp->top
}

