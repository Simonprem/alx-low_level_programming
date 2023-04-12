#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
        char *dup;
        int i, j, k;
        int len1 = 0;
        int len2 = 0;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        for (i = 0; s1[i] != '\0'; i++)
                len1++;
        for (j = 0; s2[j] != '\0'; j++)
                len2++;

        dup = malloc(sizeof(char) * (len1 + len2 + 1));

        if (dup == NULL)
                return (NULL);

        for (i = 0; i < len1; i++)
                dup[i] = s1[i];

        for (j = 0; j < len2; j++)
                dup[len1 + j] = s2[j];

        dup[len1 + len2] = '\0';

        return (dup);
}

