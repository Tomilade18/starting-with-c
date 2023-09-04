#include <stdio.h>

void main()
{
    int a[10], i;
    int even = 0, odd = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d\n", a[0]);
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("even elements are : %d", even);
    printf("\nodd elements are : %d", odd);
}