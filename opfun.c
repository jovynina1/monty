#include "monty.h"
/**
 * _push -adds a new item to tr top of a stack
 * @stack: pointer to the top of the stack
 * @line_number: line counter
 * pall - Print list
 * @stack: Double linked list
 * @line_number: File line execution
*/
void _push(stack_t **stack, unsigned int line_number)
	void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *n_node;
	(void)line_number;
	stack_t *tmp = *stack;
	(void) line_number;

	if (value[1] == 0)
	if (!tmp)
		return;
	while (tmp)
	{
		n_node = malloc(sizeof(stack_t));
		if (n_node == NULL)
		{
			fprintf(stderr, "Error: malloc failed");
			exit(EXIT_FAILURE);
		}
		n_node->n = value[0];
		n_node->prev = NULL;
		n_node->next = *stack;

		if (*stack != NULL)
			(*stack)->prev = n_node;
		*stack = n_node
			printf("%d\n", tmp->n);
			tmp = tmp->next;
	}
	else if (value[1] == 1)
		add_dnodeint_end(stack, value[0]);
}
/**
 * _pall - print all elements of stack
 * @stack: pointer to the top of the stack
 * @line_number: line counter
 * push - Insert a new value in list
 * @stack: Double linked list
 * @line_number: File line execution
*/
void _pall(stack_t **stack, unsigned int line_number)
	void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;
	stack_t *tmp = NULL, *tm = *stack;
	char *num;

	if (temp)
	num = strtok(NULL, " \r\t\n");
	if (num == NULL || (_isdigit(num) != 0 && num[0] != '-'))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	tmp = malloc(sizeof(stack_t));
	if (!tmp)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_all();
		exit(EXIT_FAILURE);
	}
	tmp->n = atoi(num);
	if (var.MODE == 0 || !*stack)
	{
		tmp->next = *stack;
		tmp->prev = NULL;
		if (*stack)
			(*stack)->prev = tmp;
		*stack = tmp;
	}
	else
	{
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
		while (tm->next)
			tm = tm->next;
		tm->next = tmp;
		tmp->prev = tm;
		tmp->next = NULL;
	}
}

/**
 * _pint - prints  the top pof the stack
 * @stack: pointer to the top of the stack
 * @line_number: liner counter
 * pint - Print last node
 * @stack: Double linked list
 * @line_number: File line execution        
*/
void _pint(stack_t **stack, unsigned int line_number)
	void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	if (!*stack)
	{
		fprintf(stderr, "L%d: Can't print, stacj empty\n", line_number);
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * _swap - swaps the first two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line counter
*/
void _swap(stack_t **stack, unsigned int line_number)
/**
 * pop - Delete top of list
 * @stack: Double linked list
 * @line_number: File line execution
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int first_n, sec_n;
	stack_t *tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	if (!*stack)
	{
		fprintf(stderr, "L%d : can't swap, stack too showrt\n", line_number);
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	first_n = temp->n;
	sec_n = temp->next->n;
	temp->next->n = first_n;
	temp->n = sec_n;
}
/**
 * _nop - does nothing
 * @stack: pointer to the top of the stack
 * @line_number: line counter
*/
 void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	tmp = *stack;
	*stack = tmp->next;
	if (tmp->next)
		tmp->next->prev = NULL;
	free(tmp);
}

	    	
