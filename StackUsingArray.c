#include<stdio.h>
#include<stdlib.h>
#define size 10
void push(int stack[],int *top);
void pop(int stack[],int *top);
void display(int stack[],int *top);
int main()
{
int top=-1,stack[10],i,response;
while (1)
{
   printf("\nStack Implementation:\n ");
   printf("1.push:\n2.pop:\n3.display:\n4.exit:\n" );
   scanf("%d",&response);
   switch (response)
   {
	case 1:push(stack,&top);
	break;
	case 2:pop(stack,&top);
	break;
	case 3:display(stack,&top);
	break;
	case 4:exit(0);
	default:printf("Enter can not element\n");
	break;
   }
}
return 0;
}
void push(int stack[],int *top)
{
int ele;
if(*top>= size-1)
{
   printf("Stack is full\n");
   exit (0);
}
else
{
   printf("Enter the element to be inserted:\n");
   scanf("%d",&ele);
   stack[++(*top)]=ele;
}
}
void pop(int stack[],int *top)
{
int ele;
if(*top==-1)
{
   printf("Stack is empty:\n");
   exit (0);
}
else
{
   ele=stack[*top];
   *top=*top-1;
   printf("Deleted element is %d:",ele);
}
}
void display(int stack[],int *top)
{
int i;
if(*top==-1)
{
   printf("Can not display as stack is empty:");
   exit (0);
}
else
{
   printf("\n Element in the stack are:\n");
   for(i=*top;i>=0;i--)
	printf("\n %d",stack[i]);
}
}
