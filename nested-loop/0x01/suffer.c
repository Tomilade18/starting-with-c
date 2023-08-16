#include <stdio.h>

int main()
{
    char alp[24] = "abcdfghijklmnoprstuvwxyz";
    int i;

    for (i = 0; i < 52; i++)
    {
        putchar(alp[i]);
    }
    putchar('\n');
    return (0);
}