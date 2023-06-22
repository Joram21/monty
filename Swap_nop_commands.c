#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @head: Head of the struct list
 * @counter: lines in the stack
 * Return: void
 **/

void swap(stack_t **head, unsigned int counter)
{
	int tmp; /* Temporal variable for swap */

	/* Verify If the stack contains less than two elements */
	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	tmp = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = tmp;
}

/**
 * nop - Doesn’t do shit, just sits pretty
 * @head: Head of the struct list
 * @counter: lines in the stack
 * Return: void
 **/
void nop(stack_t **head, unsigned int counter)
{
	/* Attribute unused*/
	(void) head;
	(void) counter;
}
