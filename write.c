#include <stdio.h>

/**
* main - write a file using different functions
* @void: Does not take any parameter
*
* Return: Return (0)
*/

int main(void)
{
	FILE *fp;

	fp = fopen("text.txt", "w+");

	fprintf(fp, "This is testing for fprintf ...\n");
	fputs("This is testing for fputs ...\n", fp);
	fclose(fp);

}
