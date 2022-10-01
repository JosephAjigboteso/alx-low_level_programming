#include <stdio.h>

/** write a program that prints it name followed by a new line **/
int main (int argc, char * argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
}
printf("\n");
return (0);
}
