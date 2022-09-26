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
 **/
char *_memcpy(char *dest, char *src, unsigned int n);















#endif
