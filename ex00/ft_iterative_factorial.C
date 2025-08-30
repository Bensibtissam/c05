#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	result = nb;
	while (nb > 1)
	{
		result *= nb - 1;
		nb--;
	}
	return (result);
}