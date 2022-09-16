#ifndef _MAIN_
#define _MAIN_
/**
 * _putchar - writes character c to std
 * @c: parameter to compare
 *
 * Return: 1 or 0
 */
int _putchar(char c);


/**
 * _isupper - checks for upper case character
 *
 * @c: character to check
 *
 * Return: 1 if c is uppercase or 0 if otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit
 * @c: character to check
 *
 * Return: 1 if c is digit or 0 if otherwise
 */
int _isdigit(int c);


/**
 * int_mul - multipy int a  & int b
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
int mul(int a, int b);


/**
 * print_numbers - print numbers from 0 to 9
 *
 */
void print_numbers(void);

/**
 * print_most_numbers - print numbers 0 to 9 except 2 & 4
 */
void print_most_numbers(void);

/**
 * more_numbers - print numbers 10 times
 */
void more_numbers(void);


/**
 * print_line - print line in terminal
 * @n: character to determine number of lines
 */
void print_line(int n);

/**
 * print_diagonal - print diagonal in terminal
 * @n: character to determine number of diagonals to be printed
 */
void print_diagonal(int n);

/**
 * print_square - print square
 * @size: size of square
 */
void print_square(int size);

/**
 * print_triangle - print triangle using #
 * @size: determines size of triangle
 */
void print_triangle(int size);

/**
 * print_number - print number
 *
 * @n: integer to print to char
 *
 */
void print_number(int n);


#endif
