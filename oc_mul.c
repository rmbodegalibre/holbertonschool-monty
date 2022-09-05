#include "monty.h"
/**
 * oc_mul - The opcode mul multiplies the second top element
 * of the stack with the top element of the stack.
 * @stack: Pointer to the new node
 * @i: Line number
 */
void oc_mul(stack_t  **stack, unsigned int i)
{
	int mul;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", i);
		m_free();
		exit(EXIT_FAILURE);
	}
/*Next node*/
	(*stack) = (*stack)->next;
/*mul current n and the n from the previus*/
	mul = (*stack)->n * (*stack)->prev->n;
/*replace the value (n) for the current node with add*/
	(*stack)->n = mul;
/*free the previus*/
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
