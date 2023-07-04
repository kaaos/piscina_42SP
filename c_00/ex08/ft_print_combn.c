/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:53:14 by kaaos             #+#    #+#             */
/*   Updated: 2023/07/04 17:13:24 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	g_v[10];
char	g_v_max[10];
int		g_flag;
int		g_base;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char *v, int size, int last)
{
	int	i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			ft_putchar(v[i++]);
		write(1, ".\n", 2);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int		i;

	i = 0;
	if (n <= 0 || n > 10)
	{
		write(1, "insert an int 0<n<10\n", 17);
		return ;
	}
	while (i < n)
	{
		g_v[i] = i + 48;
		g_v_max[i] = (10 - n) + i + 48;
		++i;
	}
	while (g_v[0] != g_v_max[0])
	{
		g_flag = (n - 1);
		while (g_v[g_flag] == g_v_max[g_flag])
			--g_flag;
		g_base = ++(g_v[g_flag]);
		while (g_flag < n)
			g_v[++g_flag] = ++g_base;
		print_array(g_v, n, g_v_max[0]);
	}
}

/*
int	main(void)
{
	ft_print_combn(11);
	write(1, "\n1\n", 3);
	ft_print_combn(1);
	write(1, "\n2\n", 3);
	ft_print_combn(2);
	write(1, "\n3\n", 3);
	ft_print_combn(3);
	write(1, "\n4\n", 3);
	ft_print_combn(4);
	write(1, "\n5\n", 3);
	ft_print_combn(5);
	write(1, "\n6\n", 3);
	ft_print_combn(6);
	write(1, "\n7\n", 3);
	ft_print_combn(7);
	write(1, "\n8\n", 3);
	ft_print_combn(8);
	write(1, "\n9\n", 3);
	ft_print_combn(9);
	write(1, "\n10\n", 3);
	ft_print_combn(10);
}
*/