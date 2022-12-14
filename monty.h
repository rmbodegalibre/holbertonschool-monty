#ifndef _MONTY_P
#define _MONTY_P

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef void (*op_func)(stack_t **, unsigned int);
extern stack_t *head;

void open_file(char *file_path);
void read_file(FILE *file, char *file_path);
int tokeniza(char *, int, int);
void get_function(char *, char *, int);
void function_call(op_func, char *, char *, int);
stack_t *new_node(int);

void oc_push(stack_t **, unsigned int);
void oc_pall(stack_t  **, unsigned int);
void oc_pint(stack_t **, unsigned int);
void oc_pop(stack_t  **, unsigned int);
void oc_swap(stack_t  **, unsigned int);
void oc_nop(stack_t  **, unsigned int);
void oc_add(stack_t  **, unsigned int);
void oc_sub(stack_t  **, unsigned int);
void oc_mul(stack_t  **, unsigned int);
void oc_div(stack_t  **, unsigned int);
void oc_mod(stack_t  **, unsigned int);
void oc_pchar(stack_t **, unsigned int);
void oc_pstr(stack_t **, unsigned int);
void m_free(void);
#endif
