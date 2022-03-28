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

char	**ft_split(char const *s, char c)
{
	char	**end;
	int		conte;
	char	*str;
	int		len;
	int		a;

	end = ft_calloc(ft_check_c(s, c), sizeof(char *));
	conte = 0;
	if (!end)
		return (NULL);
	while (s[a])
	{
		while (s[a] == c)
			a++;
		len = 1;
		while (s[a] != c && s[a])
		{
			a++;
			len++;
		}
//		end[conte++] = ft_mkstr(len, 
		printf("conte = %d\n", conte);
		printf("len = %d\n", len);
		printf("a = %d\n", a);
//		printf("%s\n", end[conte]);
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
