/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:21:45 by freduard          #+#    #+#             */
/*   Updated: 2023/06/15 19:29:02 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	while (argv[0][c] && argc != '\0')
	{
		ft_putchar(argv[0][c]);
		c++;
	}
	ft_putchar('\n');
	return (0);
}
