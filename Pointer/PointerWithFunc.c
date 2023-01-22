#include <stdio.h>

void swap(int *n, int *m)
{
    int temp = *n;
    *n = *m;
    *m = temp;
}
int main()
{
    int n = 10, m = 20;
    printf("Number 1 = %d ; Number 2 = %d\n", n, m);
    swap(&n, &m);
    printf("Number 1 = %d ; Number 2 = %d\n", n, m);
}