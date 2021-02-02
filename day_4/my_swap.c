#include <stdio.h>

void my_swap(int *a, int *b)
{
    int *c = 0;

    *c = *a;
    *a = *b;
    *b = *c;    
    printf ("%d%d", *a,*b);
}

int main(void)
{
    int *a = 2;
    int *b = 9;
    my_swap(&a, &b);
    return 0;
}