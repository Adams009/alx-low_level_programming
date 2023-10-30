#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer parameter
 * @text_content: text to create
 * Return: Always 0
 */
int create_file(const char *filename, char *text_content)
{
	int filed;
	int nlett;
	int rewrite;

	if (!filename)
		return (-1);

	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filed == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nlett = 0; text_content[nlett]; nlett++)
		;
	rewrite = write(filed, text_content, nlett);

		if (rewrite == -1)
			return (-1);
		close(filed);

		return (1);
}
