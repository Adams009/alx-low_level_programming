#include "main.h"
/**
 * append_text_to_file - t appends text at the end of a file.
 * @filename: pointer
 * @text_content: the text
 * Return: Always 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed;
	int nlett;
	int rewrite;

	if (!filename)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

	if (filed  == -1)
		return (-1);

	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlett++)
			;
		rewrite = write(filed, text_content, nlett);

		if (rewrite == -1)
			return (-1);
	}
	close(filed);

	return (1);
}
