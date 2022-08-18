#include "monty.h"

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
	{
		/**dprintf(STDERROR, algo)*/
		exit(EXIT_FAILURE);
	}
	if (value == -1)
	{
		dprintf("L%s: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	p->n = n;
	p->prev = NULL;
	if (*head)
	{
		(*head)->prev = p;
		p->next = *head;
	}	
	else
	{
		p->next = NULL;
	}
	*head = p;
}
void *add_node(stack_t **stack, int n)
{
	stack_t *new_node = NULL, *aux;


	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);
	if (!stack)
	{
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		aux = *stack;
		new_node->prev = new_node;
		new_node->next = aux;
		*stack = new_node;
	}
}

void _pall(stack_t **stack,__attribute__((unused))unsigned int line_number)
{
	stack_t *head;
	
	if (*stack)
	{
		head = *stack;
		while (head->next)
		{
			printf("%d\n", head->n);
			head = head->next;
		}
		if (head)
		{
			printf("%d\n", head->n);
		}
	}
}
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !stack)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
