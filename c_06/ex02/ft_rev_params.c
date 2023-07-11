/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:23:54 by freduard          #+#    #+#             */
/*   Updated: 2023/06/15 19:24:00 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	counter;
	int	i;

	i = 1;
	while (argv[i])
		i++;
	while (argc > 1)
	{
		counter = 0;
		while (argv[i - 1][counter])
		{
			ft_putchar(argv[i - 1][counter]);
			counter++;
		}
		ft_putchar('\n');
		i--;
		argc--;
	}
	return (0);
}
