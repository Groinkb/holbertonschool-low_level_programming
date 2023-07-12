#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string to concatenate to the end of the first string
 *
 * Return: pointer to the newly allocated concatenated string, or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated = NULL;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    unsigned int size1 = get_string_length(s1);
    unsigned int size2 = get_string_length(s2);

    concatenated = allocate_memory(size1, size2);
    if (concatenated == NULL)
        return NULL;

    copy_string(concatenated, s1);
    append_string(concatenated, s2);

    return concatenated;
}

/**
 * get_string_length - calculates the length of a string
 *
 * @str: input string
 *
 * Return: length of the string
 */
unsigned int get_string_length(const char *str)
{
    unsigned int length = 0;

    while (str[length] != '\0')
        length++;

    return length;
}

/**
 * allocate_memory - allocates memory for the concatenated string
 *
 * @size1: length of the first string
 * @size2: length of the second string
 *
 * Return: pointer to the allocated memory
 */
char *allocate_memory(unsigned int size1, unsigned int size2)
{
    char *allocated = malloc(sizeof(char) * (size1 + size2 + 1));

    return allocated;
}

/**
 * copy_string - copies the contents of one string to another
 *
 * @dest: destination string
 * @src: source string
 */
void copy_string(char *dest, const char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

/**
 * append_string - appends the contents of one string to another
 *
 * @dest: destination string
 * @src: source string
 */
void append_string(char *dest, const char *src)
{
    while (*dest != '\0')
        dest++;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
