 #include "main.h"

/**
 * _isupper - Checks if a character is an uppercase
 * @c: takes a character as argument
 *
 * Description: Checks if a character is an uppercase, if not, it returns 1
 *
 *
 * Return: returns 1 if c is uppercase  else return 0
 */

int _isupper(int c)
{
        int i;

        for (i = "A"; i <= "Z"; i++)
        {
                if (c == i)
                {
                        return (1);
                }
        }
        
        return (0);
}
