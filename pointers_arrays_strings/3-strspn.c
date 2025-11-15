#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search in
 * @accept: the string containing accepted bytes
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
unsigned int count;
int match;

i = 0;
count = 0;
while (s[i] != '\0')
{
j = 0;
match = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
match = 1;
break;
}
j++;
}
if (match == 0)
break;
count++;
i++;
}
return (count);
}
