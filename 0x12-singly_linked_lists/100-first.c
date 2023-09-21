#include <stdio.h>
#include "lists.h"
/**
 * attribute - is the name of the function
 * @constructor: is the gcc specific attribute
 * @premain: is the main function called before execution
 */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
