#include <stdio.h>

int main()
{
    char name[30];
    printf("enter name:");
//     scanf("%s%s", fname, lname);
//     printf("%s %s", fname, lname);

    gets(name);
    printf("%s", name);
    puts(name);
    puts(name);
}