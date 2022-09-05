#include "monty.h"
/**
 * function_call - Function to call functions
 * @function: Name of the function caller
 * @code: Code taken from file
 * @value: Value taken from file
 * @i: Line in file
 */

void function_call(op_func function, char *code, char *value, int i)
{
	stack_t *node;
	int j, check = 1;

	if (strcmp(code, "push") == 0)
	{
/* check if value is negative and its diferent from NULL*/
		if (value != NULL && value[0] == '-')
		{
			value += 1;
			check = -1;
		}
		if (value == NULL)
		{
			dprintf(2, "L%d: usage: push integer\n", i);
			m_free();
			exit(EXIT_FAILURE);
		}
		for (j = 0; value[j] != '\0'; j++)
		{
			if (isdigit(value[j]) == 0)
			{
				dprintf(2, "L%d: usage: push integer\n", i);
				m_free();
				exit(EXIT_FAILURE);
			}
		}
		node = new_node(atoi(value) * check);
		function(&node, i);
	}
	else
	{
		function(&head, i);
	}
}
