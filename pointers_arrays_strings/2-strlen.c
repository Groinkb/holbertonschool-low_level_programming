#include "main.h"
/**
 * main - check the code
 * a function that returns the length of a string.
 * Return: Always 0.
 *
 */
int _strlen(char *s)
{
  int carac;

  carac = 0;
  while (str[carac] != '\0')
    {
      carac = carac + 1;
    }
  return carac;
}
