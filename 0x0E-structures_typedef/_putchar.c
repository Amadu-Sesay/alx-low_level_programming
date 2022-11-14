#include <unistd.h>

/**
  * _putchar - It write the character c on stdout
  * @c: character to diasply
  *Return : on success 1, -1 on failure
  */
int _putchar(char c)
	return (write (1, &c, 1));
	}

