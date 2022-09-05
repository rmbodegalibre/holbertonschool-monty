#include "monty.h"
/**
 * m_free - Free nodes
 */
void m_free(void)
{
	stack_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
