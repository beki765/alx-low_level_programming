#include "main.h"
/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: return dest value.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int srcLength = 0;

while (dest[i] != '\0')
dest[i++] = '\0';
i = 0;
while (src[srcLength] != '\0')
srcLength++;
for (i = 0; i < srcLength; i++)
dest[i] = src[i];
dest[srcLength] = '\0';
return (dest);
}
