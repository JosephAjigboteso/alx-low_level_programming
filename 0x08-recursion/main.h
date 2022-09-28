#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int _putchar(char c);

/**
 * _puts_recursion - print out string using recursion
 * @s: string to be printed
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print out string in reverse using recursion
 * @s: string to be printed
 */
void _print_rev_recursion(char *s);

#endif
