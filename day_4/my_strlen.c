#include <stdio.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;
    for(; str[i] != '\0'; i++);
    return i;
}

int main(void)
{
    int i = my_strlen("gros caca"); 
    printf("%d", i);// printf("%d, my_strlen("hello world"));
    return 0;
}
