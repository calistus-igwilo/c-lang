#include <stdio.h>
void printLine(int nCols, char pattern);
void printTriangle(int nLines, char pattern);
void printRectangle(int nLines, int nCols, char pattern);

int main(void)
{
   int nCols;
   int nLines;
 
   printf("How many columns would you like? ");
   scanf("%d", &nCols);
   printLine(nCols, 'X');
 
   printf("How many lines would you like? ");
   scanf("%d", &nLines);
   printTriangle(nLines, '*');
   printf("\n");
   printRectangle(nLines, nCols, '#');
}

void printLine(int nCols, char pattern)
{
   int i;
   for (i = 0; i < nCols; i++)
   {
      printf("%c", pattern);
   }
   printf("\n");
}
 
void printTriangle(int nLines, char pattern)
{
   int line, cols;
   for (line = 0; line < nLines; line++)
   {
      cols = line + 1;
      printLine(cols, pattern);
   }
}
 
void printRectangle(int nLines, int nCols, char pattern)
{
   int i;
   for (i = 0; i < nLines; i++){
      printLine(nCols, pattern);
   }
}