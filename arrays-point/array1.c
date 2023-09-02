#include <stdio.h>

void main()
{
    int mark[5], i;
    float sum = 0, avg;

    printf("enter marks of five students:"); 
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &mark[i]);
    }

    for (i=0; i<5; i++)
    {
        sum = sum + mark[i];
    }
    avg = sum / 5;
    printf("sum: %f", sum);
    printf("average: %f", avg);
}