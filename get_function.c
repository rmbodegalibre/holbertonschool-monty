#include "monty.h"
/**
 * get_function - Get the function object
 *@code: Pointer with opcode
 *@value: Value for the operation
 *@i: Line number
 */
void get_function(char *code, char *value, int i)
{
	int j, check;
	instruction_t function_list[] = {
		{"push", oc_push},
		{"pall", oc_pall},
		{"pint", oc_pint},
		{"pop", oc_pop},
		{"swap", oc_swap},
		{"nop", oc_nop},
		{"add", oc_add},
		{"sub", oc_sub},
		{"mul", oc_mul},
		{"div", oc_div},
		{"mod", oc_mod},
		{"pchar", oc_pchar},
		{"pstr", oc_pstr},
		{NULL, NULL}
	};
/*Check for # comments in monty*/
	if (code[0] == '#')
		return;
	for (check = 0, j = 0; function_list[j].opcode != NULL; j++)
	{
/*compare with strcmp what i got on code and in the current position*/
		if (strcmp(code, function_list[j].opcode) == 0)
		{
/*			printf("es la funcion que necesito\n");*/
/*call the function and pass the code and the value we have from the file*/
			function_call(function_list[j].f, code, value, i);
/*this is to know if it found the function*/
			check = 1;
		}
	}
/*it didn't found the function*/
	if (check == 0)
	{
/*print the messaje de line number and the opcode*/
		dprintf(2, "L%d: unknown instruction %s\n", i, code);
		/*liberar node ?????*/
		m_free();
		exit(EXIT_FAILURE);
	}

}
