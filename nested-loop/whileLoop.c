#include <stdio.h>

int main()
{
    int i = 0 , j;

    while(i<5)
    {
        i = 0;
        while(j<2)
        {
            printf("2");
            j++;
        }
        printf("\n");
        i++;
    }


    return 0;
}