#include "monty.h"
/**
 * oc_push - function that add a node to the stack
 * @new: Pointer to the new node
 * @i: Line number
 */

void oc_push(stack_t **new, __attribute__((__unused__)) unsigned int i)
{
/*check if it enter to the function*/
/*   printf("enter _push: %d", i);*/
	stack_t *tmp;
	/*(void) i;*/
	if (*new == NULL || new == NULL)
		exit(EXIT_FAILURE);

	if (head == NULL)
	{
		head = *new;
		return;
	}
	tmp = head;
	head = *new;
	head->next = tmp;
	tmp->prev = head;
}
