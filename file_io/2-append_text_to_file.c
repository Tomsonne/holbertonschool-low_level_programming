#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - creates
 * @filename: name
 * @text_content: text
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len, indlen;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	for (indlen = 0, ptr = text_content; *ptr; ptr++)
		indlen++;
	len = write(file, text_content, indlen);

	if (close(file) == -1 || indlen != len)
		return (-1);
	return (len);
}
