#include <stdio.h>

int sum(int *a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum = sum + *(a + i);
    return sum;
}

int main()
{
    int a[3] = {2, 4, 6};
    int result = sum(&a, 3);
    printf("Sum = %d\n", result);
}