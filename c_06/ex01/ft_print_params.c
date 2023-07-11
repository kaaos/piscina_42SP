/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:22:54 by freduard          #+#    #+#             */
/*   Updated: 2023/06/15 19:29:07 by freduard         ###   ########.fr       */
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
	while (argc > 1)
	{
		counter = 0;
		while (argv[i][counter])
		{
			ft_putchar(argv[i][counter]);
			counter++;
		}
		ft_putchar('\n');
		i++;
		argc--;
	}
	return (0);
}
