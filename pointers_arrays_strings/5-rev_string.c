#include "main.h"
/**
*rev_string - reverses a string in place
*@s: pointer to the string to reverse
*Return: void
*/
void rev_string(char *s)
{
int i = 0;
int j = 0;
char temp;
while (s[i] != '\0')
{
i++;
}
i--;
while (j < i)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
j++;
i--;
}
}
