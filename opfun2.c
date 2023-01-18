#include "monty.h"

/**
 * _pop - a new item at the top of the list
 * @stack:  pointer to the top of the stack
 * @line_number: line counter
 * swap - Delete top of list
 * @stack: Double linked list
 * @line_number: File line execution
*/
void _pop(stack_t **stack, unsigned int line_number)
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int tmp;

	if (!*stack)
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		fprintf(stderr, "L%u: can't swap, stack too short\n",
				line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	aux = *stack;
	if (!aux->next)
	{
		*stack = NULL;
		free(aux);
	}
	else
	{
		*stack = aux->next;
		aux->next->prev = NULL;
		free(aux);
	}
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
/**
 * _add - add the first two elements of stack
 * @stack: pointer to the top of the stack
 * @line_number: line counter
 * add - add the top two elements of the stack
 * @stack: Double linked list
 * @line_number: File line execution
*/
void _add(stack_t **stack, unsigned int line_number)
	void add(stack_t **stack, unsigned int line_number)
{
	int addition;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fprintf(stderr, "L%u: can't add, stack too short\n",
				line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	addition = (*stack)->n;
	(*stack)->next->n += addition;
	_pop(stack, line_number);
	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
}
/**
 * _div - divide the two first elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line counter
 * sub - substract the top two elements of the stack
 * @stack: Double linked list
 * @line_number: Line counter
*/
void _div(stack_t **stack, unsigned int line_number)
void sub(stack_t **stack, unsigned int line_number)
{
	int division;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fprintf(stderr, "L%u: can't sub, stack too short\n",
				line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	division = (*stack)->n;
	if (division == 0)
	{
		fprintf(stderr, "L%d:division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= division;
	_pop(stack, line_number);
	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
}
/**
 * _mod - computes the rest of the division of the seconf top element
 * @stack: pointer to the top of the stack
 * @line_number: line counter
 * divi - divide the top two elements of the stack
 * @stack: Double linked list
 * @line_number: File line counter
*/
void _mod(stack_t **stack, unsigned int line_number)
	void divi(stack_t **stack, unsigned int line_number)
{
	int module;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fprintf(stderr, "L%u: can't div, stack too short\n",
				line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	module = (*stack)->n;
	if (module == 0)
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= module;
	_pop(stack, line_number);
	(*stack)->next->n = (*stack)->next->n / (*stack)->n;
	pop(stack, line_number);
}



