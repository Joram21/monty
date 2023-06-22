#include "monty.h"

/**
 * push - Function to push integers to the stack.
 * @head: Head of the struct list
 * @counter: total lines with data in the stack
 * Return: void
 **/

void push(stack_t **head, unsigned int counter)
{
	stack_t *new_node = NULL;
	int lines = 0;
	char *verify = strtok(NULL, LIMITER);

	if (!verify)/* if <int> is not an int or if no argument given to push */
	{
		fprintf(stderr, "L%u: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}

	while (verify[lines] != '\0')
	{
		if (!isdigit(verify[lines]) && verify[lines] != '-')
		{
			fprintf(stderr, "L%u: usage: push integer\n", counter);
			exit(EXIT_FAILURE);
		}
		lines++;
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(verify);
	new_node->prev = NULL;

	if (*head)
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
	else
	{
		(*head) = new_node;
		new_node->next = NULL;
	}
}

/**
 * pall - Outputs values on the stack frop up to down
 * @head: Head of the struct list
 * @counter: lines in the stack
 * Return: void
 **/

void pall(stack_t **head, unsigned int counter __attribute__((unused)))
{
	/* Transfer values to not modify original list */
	stack_t *tmp = *head;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * pint - Outputs the first value at the top of the stack,
 * followed by a new line.
 * @head: Head of the struct list
 * @counter: lines in the stack
 * Return: void
 **/

void pint(stack_t **head, unsigned int counter)
{
	/* Verify if the stack is empty */
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * pop - Removes the top value of the stack.
 * @head: Head of the struct list
 * @counter: lines in the stack
 * Return: void
 **/
void pop(stack_t **head, unsigned int counter)
{
	stack_t *new_list = *head;

	/* Verify if the stack is empty */
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	new_list = (*head)->next;
	free(*head);
	*head = new_list;
}
