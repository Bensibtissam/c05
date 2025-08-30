int	ft_is_prime(int nb)
{
	int	limit;
	int	i;

	if (nb <= 1)
		return (0);
	limit = nb / 2;
	i = 2;
	while (i <= limit)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(4));
// 	return (0);
// }