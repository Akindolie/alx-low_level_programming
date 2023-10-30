#include <stdlib.h>
/**
 * create_array - Creates and initializes an array of characters with character 'c'.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 * Return: A pointer to the array of characters.
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int index;

    if (size > 0)
    {
        arr = malloc(size * sizeof(char));
        if (arr == NULL)
            return (NULL);
    }
    else
            return (NULL);
    for (index = 0; index < size; index++)
        arr[index] = c;
    return (arr);
}
