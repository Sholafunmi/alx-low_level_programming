#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination pointer
 * @src: char to merge with destination / source pointer
 * Return: s2 to s1
 */

char *_strcat(char *dest, char *src)
{
	char s1[35] = "Hello ";
	char s2[] = "ALX!";

	strcat(s1, s2);
	printf("%s\n", s1);
	return (0);
}
