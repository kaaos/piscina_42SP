/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:02:27 by freduard          #+#    #+#             */
/*   Updated: 2023/07/04 17:12:47 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n1;
	int	n2;

	n1 = 48;
	n2 = 57;
	while (n1 <= n2)
	{
		write(1, &n1, 1);
		n1++;
	}	
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
