/**
 * _memset - Fills a block of memory with a specified byte
 * @s: A pointer to the memory area to be filled
 * @b: The byte value used to fill the memory
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the memory area 's' after filling
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (index = 0; i < n; index++)
    {
        s[index] = b;
    }
    return (s);
}
