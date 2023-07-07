/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:20:32 by freduard          #+#    #+#             */
/*   Updated: 2023/07/07 12:32:32 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	pos;

	pos = 0;
	while (pos < (size -1))
	{
		if (tab[pos] > tab[pos +1])
		{
			swap = tab[pos];
			tab[pos] = tab[pos +1];
			tab[pos +1] = swap;
			pos = 0;
		}
		else
		pos++;
	}
}

// int	main(void)
// {
// 	int tab[] = {9, 8, 7, 4, 5, 3, 1, 6, 2, 0};
// 	ft_sort_int_tab(tab, 10);

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d", tab[i]);
// 	}
// 	return (0);
// }
