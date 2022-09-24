#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar - writes character c to std
 *
 * @c: parameter to compare
 *
 * Return: 1 or 0
 *
 */
int _putchar(char c);

/**
 * reset_to_98 - update values of pointer to 98
 * @n: integer the pointer points to
 */
void reset_to_98(int *n);

/**
 * swap_int - swap int a and int b
 * @a: first integer
 * @b: secpond integer
 */
void swap_int(int *a, int *b);

/**
 * int_strlen - returns length of string
 * @s: pointer
 * Return: 0
 */
int _strlen(char *s);

/**
 * _puts - prints stirng followed by new line
 * @str: string to be printed
 */
void _puts(char *str);

/**
 * print_rev - print string in reverse
 * @s: pointer to the string
 * Return: 0
 */
void print_rev(char *s);

/**
 * rev_string  - reverse string
 * @s: string
 */
void rev_string(char *s);

/**
 * puts2 - print every other character of a string
 * @str: string to be printed
 */
void puts2(char *str);

/**
 * puts_half - prints half of the string
 * @str - string to be printed
 * Return: 0
 */
void puts_half(char *str);

/**
 * print_array - print array of integers
 * @a: pointer of array
 * @n: number of times to print
 */
void print_array(int *a, int n);

/**
 * _strcpy - main function to copy
 * @dest: destination to copy
 * @src: pointer of string to be copied
 * Return: 0
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: value of integer
 */
int _atoi(char *s);

/**
 * print_number - print integer n
 */
void print_number(int n);




#endif
