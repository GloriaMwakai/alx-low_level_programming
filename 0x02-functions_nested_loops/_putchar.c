#include <unistd.h>
/**
 * _putchar - writes the character c as output
 * Return: 1 on successful run
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
