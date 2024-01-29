#include "monty.h"

/**
 * pop - Delete an element form the stack
 * @top: Displays the topmost element in the stack
 * Return: void
 *
 */

#define SIZE 100

void pop()
{
	int i;
	int top;
	int get[SIZE];

	if (top == -1)
	{
		printf("stack undrlfow\n");
	}
	else
	{
		i = get[top];
		top--;
	}
}	
