#include "monty.h"
/**
 * oc_mod - The opcode mod computes the rest of the division
 * of the second top element of the stack by the top element
 * of the stack.
 * @stack: Pointer to the new node
 * @i: Line number
 */
void oc_mod(stack_t  **stack, unsigned int i)
{
	int mod;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't mod, stack too short\n", i);
		m_free();
		exit(EXIT_FAILURE);
	}
/*check for a diferent value of 0*/
	if ((*stack)->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", i);
		m_free();
		exit(EXIT_FAILURE);
	}
/*Next node*/
	(*stack) = (*stack)->next;
/*mod current n and the n from the previus*/
	mod = (*stack)->n % (*stack)->prev->n;
/*replace the value (n) for the current node with add*/
	(*stack)->n = mod;
/*free the previus*/
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
