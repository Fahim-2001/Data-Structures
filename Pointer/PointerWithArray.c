#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5}, sum = 0;
    int *ptr = &a[3];

    printf("%u\n", *(ptr));
    printf("%u\n", *(ptr + 1));
    printf("%u\n", *(ptr - 1));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
        sum = sum + *(a + i);
    }
    printf("\n%d", sum);
}