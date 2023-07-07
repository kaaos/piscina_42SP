/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:19:38 by freduard          #+#    #+#             */
/*   Updated: 2023/07/07 15:27:01 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	check_sign(long int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	return (nbr);
}

int	check_base(char *base)
{
	int	j;
	int	i;

	j = 0;
	while (base[j])
	{
		if (base[j] == '+' || base[j] == '-'
			|| base[j] == ' ' || (base[j] < 14 && base[j] > 8))
			return (0);
		i = 0;
		while (base[i])
		{	
			if (i != j)
			{	
				if (base[i] == base[j])
					return (0);
			}
			i++;
		}
	j++;
	}
	if (j == 1)
		return (0);
	return (j);
}

void	print_nbr(char *base, char *result, long int nbr, int size)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		result[i] = base[nbr % size];
		nbr = nbr / size;
		i++;
	}
	while (i >= 0)
	{
		i--;
		write(1, &result[i], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			size;
	long int	long_nbr;
	char		result[20];

	long_nbr = nbr;
	size = check_base(base);
	if (size < 2)
		return ;
	long_nbr = check_sign(long_nbr);
	if (long_nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	print_nbr(base, result, long_nbr, size);
}

// int	main(void)
// {
// 	char	*base;
// 	int		nbr;
// 	char	base_arr[] = "01";

// 	base = base_arr;
// 	nbr = -2147483648;

// 	ft_putnbr_base(nbr, base);
// 	write(1, "\n", 1);
// }
