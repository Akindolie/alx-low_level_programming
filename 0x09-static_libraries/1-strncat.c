/**
 * _strncat - Concatenate two strings with a limit on the number of characters copied.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: The maximum number of bytes to concatenate from src.
 * Return: Pointer to the resulting destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0, src_index = 0;

	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}

	while (src[src_index] != '\0' && src_index < n)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	return (dest);
}
