/**
 * _strcat - Concatenates two strings
 * @destination: Pointer to the destination string
 * @source: Pointer to the source string
 * Return: Pointer to the resulting string (destination)
 */

char *_strcat(char *destination, char *source)
{
    int dest_length = 0;
    int source_index = 0;

    while (destination[dest_length] != '\0')
    {
        dest_length++;
    }

    while (source[source_index] != '\0')
    {
        destination[dest_length + source_index] = source[source_index];
        source_index++;
    }

    return destination;
}
