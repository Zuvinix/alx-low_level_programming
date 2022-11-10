#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - number of arguments passed into it
 * @argc: count argument
 * @argv: argument
 *
 * Return: Always 0 if success
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
