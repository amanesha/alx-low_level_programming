#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be changed
 * Return: 1 for alphabetic character or 0 fo anything else
 */
int -isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
