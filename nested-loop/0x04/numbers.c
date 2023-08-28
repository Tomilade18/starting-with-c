#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
    int a;

    a = 0;

    if (a < 10)
    {
        printf("%d", a);
        return (1);
    }
    a++;
}

int main(void)
{
    print_most_numbers();
    return (0);
}