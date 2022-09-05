#include "monty.h"
/**
 * oc_swap - The opcode swap swaps the top two
 * elements of the stack.
 * @stack: Is the first attribute
 * @i: Line number
 */
void oc_swap(stack_t  **stack, __attribute__((__unused__)) unsigned int i)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", i);
		m_free();
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	if (tmp->next != NULL)
		(tmp->next)->prev = *stack;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	tmp->prev = NULL;
	*stack = tmp;
}
