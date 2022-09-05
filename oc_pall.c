#include "monty.h"
/**
 * oc_pall - function that prints all the stack
 * @stack: Is the first attribute
 * @i: Line number
 */
void oc_pall(stack_t  **stack, __attribute__((__unused__)) unsigned int i)
{
/*check if it enter to the function*/
	stack_t *tmp;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
