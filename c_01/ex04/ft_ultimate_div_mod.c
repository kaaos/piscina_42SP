/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:16:52 by freduard          #+#    #+#             */
/*   Updated: 2023/06/09 15:31:54 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 11;
// 	b = 2;
// 	printf ("a : %d, b : %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf ("a : %d, b : %d\n", a, b);
// }