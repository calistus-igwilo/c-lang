#include <stdio.h>

int main(void)
{
int i;

i = -9;
while (i < 0)
{
    printf("%d", -i);
    i++;
}
}