/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:58:35 by freduard          #+#    #+#             */
/*   Updated: 2023/06/09 18:30:42 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	b;
	int	a;
	int	temp;

	temp = 0;
	a = 0;
	b = size - 1;
	while (a < b)
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		b--;
		a++;
	}
}

// void	ft_print(int size, int *arr)
// {
// 	int	b;

// 	b = 0;
// 	while (b < size)
// 	{
// 		printf("%d", arr[b]);
// 		b++;
// 	}
// }

// int	main(void)
// {
// 	int	arr_size;
// 	int	arr[9] = {1, -10, 3, 4, 5, 6, 7, 8, 9};
// 	arr_size = 9;
// 	ft_print(arr_size, arr);
// 	printf("||||");
// 	ft_rev_int_tab(arr, arr_size);
// 	ft_print(arr_size, arr);
// 	return (0);
// }
