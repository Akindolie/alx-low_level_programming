/**
 * _memcpy - Copy memory from source to destination
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to be copied
 * Return: Pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int index;

    for (index = 0; index < n; index++)
        dest[index] = src[index];
    return (dest);
}
