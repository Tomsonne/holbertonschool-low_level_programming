/**
 * leet - encode string to 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */


char *leet(char *s)
{
	char *res = s;
	char letter[] = { 'a', 'e', 'o', 't', 'l' };
	char num[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == letter[i] || *s == letter[i] - 32)
				*s = num[i] + '0';
		}
		s++;
	}
	return (res);
}
