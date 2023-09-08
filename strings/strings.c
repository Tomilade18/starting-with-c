#include <stdio.h>

int main()
{
    char name[30];
    printf("enter name:");
    scanf("%5s",name);
//     printf("%s %s", fname, lname);

    gets(name);
    printf("%s", name);
    puts(name);
    puts(name);
}