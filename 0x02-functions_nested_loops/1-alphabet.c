#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * Return: Nothing
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
