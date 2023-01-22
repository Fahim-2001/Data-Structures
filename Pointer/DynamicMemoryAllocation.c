#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2;
    ptr1 = (int *)malloc(5 * (sizeof(int)));
    ptr2 = (int *)calloc(5, sizeof(int));

    if (ptr1 == NULL || ptr1 == NULL)
        printf("Memory allocation failed!\n");
    else
    {
        printf("Memory allocation successful!\n");
        realloc(ptr1, 10 * sizeof(int));
        printf("Memory reallocation Successful!\n");
    }
}