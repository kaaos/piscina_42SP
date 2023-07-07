/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:04:11 by freduard          #+#    #+#             */
/*   Updated: 2023/06/09 15:27:48 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*ptra;
// 	int	*ptrb;

// 	a = 1;
// 	b = 2;
// 	ptra = &a;
// 	ptrb = &b;
// 	ft_swap(ptra, ptrb);
// 	printf("a = %d, b = %d\n", a, b);
// }