#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - write the charaectr c to stdout
 * @c: the character t display
 *
 * Return : On success 1
 */

int _putchar(char *str)
{
        return (write(1, &str, 1));

}

