for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
        sum = sum + *(a + i);
    }
    printf("\n%d", sum);