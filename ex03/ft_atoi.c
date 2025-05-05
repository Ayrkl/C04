int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (result * sign);
}
#include <stdio.h>

int main(void)
{
	char *s1 = "   ---+--+1234ab567";
	char *s2 = "  +42";
	char *s3 = "  -+-+--+56abc";
	char *s4 = "abc123";
	char *s5 = "  -0012a42";

	printf("%d\n", ft_atoi(s1));
	printf("%d\n", ft_atoi(s2));
	printf("%d\n", ft_atoi(s3));
	printf("%d\n", ft_atoi(s4));
	printf("%d\n", ft_atoi(s5));

	return 0;
}

