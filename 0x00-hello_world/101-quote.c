#include <unistd.h>
/**
 * main- This is to print content
 *
 * Description: To make sure we are right
 * Return: Always 0 if successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
