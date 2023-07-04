/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:55:48 by freduard          #+#    #+#             */
/*   Updated: 2023/07/04 17:12:40 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	z;
	int	a;

	a = 97;
	z = 122;
	while (z >= a)
	{	
		write(1, &z, 1);
		z--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
