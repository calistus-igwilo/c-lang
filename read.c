#include <stdio.h>

/**
 * main - Read file reading different functions
 * @void: Does not take any parameter
 *
 * Description: fgetc() - reads a character from input ifle
 * fgets() - reads upto n-1 characters, from input stream, copies
 * the read string into the buffer buf, appending a null characte
 * to terminate the string
 * fscanf() - reads string from a file, but stops reading after e
 * encountering the first space character
 *
 * Return: Return (0)
 */

int main(void)
{
	FILE *fp;
	char buff[255];

	fp = fopen("text.txt", "r");
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	fgets(buff, 255, (FILE *)fp);
	printf("2: %s\n", buff);

	fgets(buff, 255, (FILE *)fp);
	printf("3: %s\n", buff);
	fclose(fp);

}

