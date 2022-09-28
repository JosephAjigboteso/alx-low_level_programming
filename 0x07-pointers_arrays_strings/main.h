#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - print  characater c to stdout
 * @c: character to be printed
 *
 * Return: on success 1
 * On error - -1 is returned, and errno s set appropiately
 **/
int _putchar(char c);

/**
 * _memset - fills first n bytes of memory pointed to by s with character b
 * @s: points to the memory to be filled
 * @b: character to fill memory
 * @n: determine number of bytes memory to be filled in memory
 * Return: return pointer to s
 **/
char *_memset(char *s, char b, unsigned int n);


/**
 *_memcpy - copy n bytes from src to dest
 * @src: memory area to copy bytes from
 * @dest: memory area to paste bytes
 * Return: pointer to dest
 * @n: determines amount of bytes
 **/
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates character c in string s
 * @s: string to be searched
 * @c: character to be searched
 * Return: pointer if c is found
 * Or null: is c isnt found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - get length of prefix substring
 * @s: first string
 * @accept: second string
 * Return: bytes of prefix string
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches string for any set of integers
 * @s: strings
 * @accept: string
 * Return: pointer to byte in s or null if byte not found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 * @haystack: substring of needle
 * @needle: string
 * Return: pointer if substring is found or NULL if not
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print a chess board
 * @a: array of 8
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - add sum of diagonals in square matrix
 * @a: array of matrix casted a s a pointer
 * @size: determines size of matrix
 */
void print_diagsums(int *a, int size);
#endif
