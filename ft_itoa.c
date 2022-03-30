#include"libft.h"

int	ft_digit(long int n)
{
	int	a;

	a = 1;
	if (n < 0)
		n *= -1;
	while (n / 10 > 0)
	{
		n /= 10;
		a++;
	}
	return (a);
}

char	*ft_mkstr(long int n, int a)
{
	char	*ptr;
	int		cpy;

	cpy = n;
	ptr = ft_calloc(a + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (n >= 0)
		a--;
	else
		n *= -1;
	while (a >= 0)
	{
		ptr[a] = n % 10 + 48;
		n /= 10;
		a--;
	}
	if (cpy < 0)
		ptr[0] = '-';
	return (ptr);
}

char	*ft_itoa(long int n)
{
	int		a;

	if (n < -2147483648 || n > 2147483647)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	a = ft_digit(n);
	return (ft_mkstr(n, a));
}
/*
int	main(void)
{
	printf("%s", ft_itoa(125464));
	return (0);
}*/
