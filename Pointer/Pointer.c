#include <stdio.h>

int main()
{
    char y;
    char *ptr;
    y = 'A';
    ptr = &y;
    printf("%c\n", y);
    printf("%c\n", *ptr);
    printf("%p\n", &y);
    printf("%p\n", ptr);
}