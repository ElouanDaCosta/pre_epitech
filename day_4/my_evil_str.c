#include <stdio.h>

void my_putchar(char c);

int my_putstr(char const *str);

char *my_evil_str(char *str)
{
    int f = 5;
    int g = 0;
    char temp;

    for(; f != g; f--) {
        temp = str[g];
        str[g] = str[f];
        str[f] = temp;
        g++;
    }
    return str;    
}

int main(void)
{
    char str1[6];
    char str2[6] = "abcdef";
    strcpy(str1, str2);
    printf("%s\n", my_evil_str(str1));
    return 0;
}