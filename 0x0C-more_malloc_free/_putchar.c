 #include "unistd.h"
  2
  3 /** _putchar - write the character on stdout
  4   *@c : character to be printed
  5   *Return: on success 1
  6   */
  7
  8 int _putchar(char c)
  9 {
 10         return(write(1, &c, 1));
 11
 12 }

