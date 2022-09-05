#include "monty.h"
/**
 * oc_pint - The opcode pint prints the value at
 * the top of the stack
 * @stack: Is the first attribute
 * @i: Line number
 */
void oc_pint(stack_t  **stack, unsigned int i)
{
	if (stack == NULL || *stack == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", i);
		m_free();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
