#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - prints
 * @filename: file
 * @letters: number
 * Return: actual number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int len, chars;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}
	len = read(file, buf, letters);
	if (len == -1)
	{
		free(buf);
		close(file);
		return (0);
	}

	chars = write(STDOUT_FILENO, buf, len);

	free(buf);
	close(file);
	if (chars != len)
		return (0);
	return (len);
}
