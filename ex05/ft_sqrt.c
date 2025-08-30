int	ft_sqrt(int nb)
{
	int	x;
	int	target;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (nb);
	target = nb / 2;
	x = 2;
	while (x <= target)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(4));
// 	return (0);
// }