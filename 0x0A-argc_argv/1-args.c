#include <stdio.h>
/**                                                                                                          * main - print command executuon strings                                                                    
 * @argc: detemines number of argumets passed when executing file                       
 * @argv: prints the strings                                                                                 
 * Return: 0                                                                                                 */ 
int main(int argc, __attribute__((unused))char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
