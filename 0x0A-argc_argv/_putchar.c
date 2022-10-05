#include <unistd.h>

/**
* _putchar - writes character to stdout
*
*@c: the character to print
*
* Return: on success 1 and -1 on fail and errno is set appropriately
*/
int _putchar(char c)

{

	return (write(1, &c, 1));

}
