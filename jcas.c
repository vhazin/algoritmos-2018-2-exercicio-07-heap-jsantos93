#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int heap[n];
    char heap_c[n];
    printf("%d\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %c/%d", &heap_c[i], &heap[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("(%c/%d)\n", heap_c[i], heap[i]);
    }

    return 0;
}