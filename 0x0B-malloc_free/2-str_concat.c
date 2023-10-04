#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space containing the concatenated string
 * or NULL if the function fails
 */
char *str_concat(char *s1, char *s2)
{
    char *concat_str;
    int len1 = 0, len2 = 0, i, j;

    /* If NULL is passed, treat as an empty string */
    s1 = s1 ? s1 : "";
    s2 = s2 ? s2 : "";

    /* Calculate length of s1 */
    while (s1[len1])
        len1++;

    /* Calculate length of s2 */
    while (s2[len2])
        len2++;

    /* Allocate memory for concatenated string */
    concat_str = malloc((len1 + len2 + 1) * sizeof(char));

    /* If memory allocation fails */
    if (!concat_str)
        return (NULL);

    /* Copy s1 into concat_str */
    for (i = 0; i < len1; i++)
        concat_str[i] = s1[i];

    /* Copy s2 into concat_str */
    for (j = 0; j < len2; j++)
        concat_str[i + j] = s2[j];

    /* Null terminate the concatenated string */
    concat_str[i + j] = '\0';

    return (concat_str);
}
