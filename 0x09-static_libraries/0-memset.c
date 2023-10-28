/**
 * _memset - fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b
 * @s: the memory area to fill
 * @b: the byte to fill with
 * @n: the number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}

	return (s);
}

