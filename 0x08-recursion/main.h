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

/**
 * _strlen_recursion - print length oof string using recursion
 * @s:string whose length is to be found
 * Return: length
 */
int _strlen_recursion(char *s);

/**
 * factorial - gets factorial of a given integer.
 * @n: integer to be calculated
 * Return: factorial n
 */
int factorial(int n);

/**
 * _pow_recursion - gives the resuly of x raised to the power of y
 * @x: base integer
 * @y: power integer
 * Return: result
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - find square of given integer
 * @n: intger n
 * Return: return square root
 */
int _sqrt_recursion(int n);
/**
 * root - process square root when n is not 0 or 1
 * @n: number
 * @i: incrementor
 * Return: (square root)
 */

int root(int n, int i);

/**
 * is_prime_number - check if input is a prime number
 * @n: integer to check
 * Return: return 1 or 0
 */
int is_prime_number(int n);

/**
 * helper_prime - checks for prime number
 * @n: number
 * @i: for the increment
 * @limit: stop
 * Return: 0
 */
int helper_prime(int n, int i, int limit);

/**
 * is_palindrome - check if a string is empty or not
 * @s: string
 * Return: 1 is string is palindrome or 0 if not
 */
int is_palindrome(char *s);

/**
 * palindrome_check - returns 1 if palindrome and 0 if not
 * @s: string
 * @len: length of string
 * @i: counter variable
 *
 * Return: int
 *
 */
int palindrome_check(char *s, int len, int i);

/**
 * wildcmp -compare strings
 * @s1: strings 1
 * @s2: strings 2
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2);

#endif
