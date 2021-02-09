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
    my_strlen("gros caca"); 
    return 0;
}
