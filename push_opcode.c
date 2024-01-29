#include "monty.h"

/**
 * push - adds an element to the top of the stack
 * @top: displays the topmost element of the stack
 *@i: elements to be addeed to the stack
 * Return: void
 *
 */

#define SIZE 100

void push()
{
	/** declare variable **/
	int i;
	int top;
	int get[SIZE];{

	/*checks if there's any item in the stack */
	if (top == SIZE  - 1)
	{
		printf("\nStack Overflow!!");
	}
	else
	/* ask for the item to be added to the stack */
	{
		printf("\nEnter the element to be added onto the stack: ");
		scanf("%d", &i);
		top++;
		get[top] = i;
	}
}
