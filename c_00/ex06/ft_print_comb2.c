/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:16:28 by freduard          #+#    #+#             */
/*   Updated: 2023/07/04 17:13:10 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}	
	c = (n / 10) + 48;
	write(1, &c, 1);
	c = n % 10 + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	short	x[2];

	x[0] = 0;
	while (x[0] < 99)
	{
		x[1] = x[0] + 1;
		while (x[1] < 100)
		{
			if (x[1] > x[0])
			{
				ft_putchar(x[0]);
				write(1, " ", 1);
				ft_putchar(x[1]);
				if (x[0] == 98 && x[1] == 99)
					write(1, ".\n", 2);
				else
					write(1, ", ", 2);
			x[1]++;
			}
		}
	x[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
