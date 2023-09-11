#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30]="jenny";
    char s2[]="khatri";
    strcat(s1,s2);
    printf("%s", s1);
    puts(s2);
}