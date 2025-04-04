#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - creates
 * @filename: name
 * @text_content: text
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int len = 0, flen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (flen = 0, ptr = text_content; *ptr; ptr++)
			flen++;
		len = write(file, text_content, flen);
	}

	if (close(file) == -1 || flen != len)
		return (-1);
	return (1);
}

