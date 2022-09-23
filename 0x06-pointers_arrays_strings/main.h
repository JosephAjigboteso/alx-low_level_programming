#ifndef _MAIN_
#define _MAIN_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int _putchar(char c);

/**
 * _strcat - cocatenate two strings
 * @src: first
 * @dest: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - cat strings
 * @dest: 1
 * @src:2
 * @n:n
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 *_strncpy - copy string dest into src
 * @dest: first
 * @src: second
 * @n: number of times
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string 2
 * Return: value of string
 */
int _strcmp(char *s1, char *s2);



/**
 * reverse_array - reverse array of integers
 * @a: first integer
 * @n: second integer
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - change lowercase in string to uppercase letters
 * Return: value of upper
 */
char *string_toupper(char *);


/**
 * cap_string - capitalize all words of a string
 *
 * Return: value of cap
 */
char *cap_string(char *);


/**
 * leet - encodes string into 1337
 *
 * @s: string
 *
 * Return: char value
 */
char *leet(char *);





#endif
