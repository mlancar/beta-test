#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	str_count(char c, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (c == str[i])
			j++;
		i++;
	}
	return (j);
}


int main(int ac, char **av) 
{
	char *base = "23456789TJDKA";
	int i = 0;
	int result = 0;

	if (ac != 2)
		return (0);
	while (av[1][i])
	{
		if (!strchr(base, av[1][i]))
		{
			printf("Hand is not valid\n");
			return (0);
		}
		i++;
	}
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] == '2')
			result += 2;
		else if (av[1][i] == '3')
			result += 3;
		else if (av[1][i] == '4')
			result += 4;
		else if (av[1][i] == '5')
			result += 5;
		else if (av[1][i] == '6')
			result += 6;
		else if (av[1][i] == '7')
			result += 7;
		else if (av[1][i] == '8')
			result += 8;
		else if (av[1][i] == '9')
			result += 9;
		else if (av[1][i] == 'T')
			result += 10;
		else if (av[1][i] == 'J')
			result += 10;
		else if (av[1][i] == 'D')
			result += 10;
		else if (av[1][i] == 'K')
			result += 10;
		else if (av[1][i] == 'A' && (result + 11) > 21)
			result += 1;
		else if (av[1][i] == 'A' && (result + 11) <= 21)
			result += 11;
		i++;
	}
	if (result == 21)
		printf("Blackjack!\n");
	else
		printf("%d\n", result);
}