#include <stdio.h>

int main()
{
    char  fname[30], lname[30];
    printf("enter name:");
    scanf("%s%s", fname, lname);
    printf("%s", fname, lname);
}