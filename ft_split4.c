#include<stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *a);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);

int	ft_check_c(char const *s, char c)
{
	int		find;

	find = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			s++;
		if (*s - 1 != c)
			find++;
	}
	printf("find = %d\n", find);
	return (find);
}

char	*ft_mkstr(const char *s, char c, int pos)
{
	char	*str;
	int		a;

	a = pos;
	if (s[a] == c)
		a++;
	while (s[a] != c)
		a++;
	str = ft_calloc(a, sizeof(char));
	a = 0;
	while (str[pos] != c)
	{
		str[a] = s[pos];
		pos++;
		a++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**end;
	int		t;
	int		numptrs;
	int		cont;
	int		pos;

	t = 0;
	cont = 0;
	numptrs = ft_check_c(s, c);
	end = ft_calloc(numptrs, sizeof(char *));
	pos = 0;
	while (t <= numptrs)
	{
		while (s[pos])
		{
			while (s[pos] == c)
				pos++;
			while (s[pos] != c)
				pos++;
			printf("%d", pos);
			end[t] = ft_mkstr(s, c, pos);
		}
		t++;
	}
	return (end);
}

int	main(void)
{
	char	*s;
	char	c;

	s = "luis se toma un batido";
	c = ' ';
	ft_split(s, c);
}