#include "main.h"

/**
 * _memcpy - functions that copies information between void pointers.
 * @newptr: destination pointer.
 * @ptr: source pointer.
 * @size: new pointer size.
 *
 * Return: null
 */
void _memcpy(void *newptr, const void *ptr, unsigned int size)
{
	char *char_ptr = (char *)ptr;
	char *char_newptr = (char *)newptr;
	unsigned int i;

	for (i = 0; i < size; i++)
		char_newptr[i] = char_ptr[i];
}
