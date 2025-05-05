#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr("Merhaba, dünya!\n");
    ft_putstr("42\n");
    ft_putstr("");
    return 0;
}

