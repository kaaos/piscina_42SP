/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:07:32 by freduard          #+#    #+#             */
/*   Updated: 2023/06/09 15:29:47 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	mod;
// 	int	div;

// 	a = 11;
// 	b = 2;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf(" a = %d, b = %d\n div = %d, mod = %d\n", a, b, div, mod);
// }
