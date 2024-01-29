#include "monty.h"
/**
 * display - display 
 * Return: void
 */



#define SIZE 100
void display()
{
	int get[SIZE];
	int top, i;

	if(top == -1)
	{
		printf("Stack underflow\n");
	}
	else if(top > 0)
	{
		for(i = top; i >= 0; i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
