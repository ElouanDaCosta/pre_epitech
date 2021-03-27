#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    for(int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    my_putchar('\n');
    return 0;
}

int main(void)
{
    my_putstr("gros caca");
    return 0;
}