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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb + 1))
		return (nb + 1);
	return (ft_find_next_prime(nb + 1));
}