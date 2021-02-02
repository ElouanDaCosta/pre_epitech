#include <stdio.h>

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
    printf ("%d %d", a[0], b[0]);
}

int main(void)
{
    int a[3] = {2, 3, 4};
    int b[3] = {9, 46, 34};
    my_swap(a, b);
    return 0;
}