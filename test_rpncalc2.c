#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int		is_operateur(char *str)
{
	if (*str == '-' && *(str + 1) >= '0' && *(str + 1) <= '9')
		return (0);
	else if (*str == '*' || *str == '+' || *str == '-' || *str == '%' || *str == '/')
		return (0);
}

int		ft_doop(char c, int a, int b)
{
	if (c == '/' || c == '%')
	{
		if (b == 0)
		{
			printf("Error\n");
			return (0);
		}
		a = c == '/' ? a / b : a % b;
	}
	else if (c == '-' || c == '+')
		a = c == '+' ? a + b : a - b;
	else if (c == '*')
		a = a * b;
	return (a);
}

long		*rpn_calc(char *str)
{
	long	tab[15] = {};
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (is_operateur(str + i) == 0)
		{
			tab[j++] = atoi(str + i);
			while (str[i] != '\0' && str[i] != ' ')
				i++;
			if (str[i] == '\0')
			{
				printf("Error\n");
				return (NULL);
			}
			while (str[i] == ' ')
				i++;
		}
		if (j < 2)
		{
			printf("Error\n");
			return (NULL);
		}
		tab[j - 2] = ft_doop(str[i], tab[j - 2], tab[j - 1]);
		j--;
		i++;
		while (str[i] == ' ')
			i++;
	}
	if (j > 1)
	{
		printf("Error\n");
		return (NULL);
	}
	return (tab);
}

int		main()
{
	long	*tab;

	tab = rpn_calc("20 -3 4 5 6 * + - /");
	if (tab != NULL)
		printf("%ld\n", tab[0]);
	return (0);
}