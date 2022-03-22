#include<stdio.h>

int	ft_atoi(const char *str)
{
	int		a;
	int		menos;
	int		num;

	a = 0;
	menos = 0;
	num = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			menos++;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		num = num * 10 + (str[a] - 48);
		a++;
	}
	if (menos % 2 != 0)
		return (num * (-1));
	return (num);
}

int		main(void)
{
	char	*str;
	str = "  			 --++-677.-78.-asdjadk8790";
	printf("%d \n", ft_atoi(str));
	return (0);
}
