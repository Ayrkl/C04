#include <stdio.h>

int ft_strlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main(void)
{
    char *text1 = "Merhaba!";
    char *text2 = "";
    char *text3 = "1234567890";

    printf("'%s' uzunluğu: %d\n", text1, ft_strlen(text1));
    printf("Boş string uzunluğu: %d\n", ft_strlen(text2));
    printf("'%s' uzunluğu: %d\n", text3, ft_strlen(text3));

    return 0;
}

