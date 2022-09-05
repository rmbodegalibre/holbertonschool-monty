#include "monty.h"
/**
 * tokeniza - make token for the current line
 *
 * @line: Pointer to the current line
 * @i: Number of the line
 * @check_token: Integer
 * Return: integer
 */

int tokeniza(char *line, int i, int check_token)
{
	char *code;
	char *value;

	if (line == NULL)
	{
		dprintf(2, "Error: \n");
		exit(EXIT_FAILURE);
	}
	code = strtok(line, "\t\n ");
	if (code == NULL)
		return (0);
	value = strtok(NULL, "\t\n ");
/*Test if i got the code and the value right*/
/*   printf("\n%s :%d", code, i);*/
/*    printf("\n%s :%d\n", value, i);*/
	get_function(code, value, i);

	return (check_token);
}
