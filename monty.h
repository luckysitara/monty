#ifndef monty_h
#define monty_h

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
}

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * DescriptionL opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instructuon_s
{
	chat *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



#endif
