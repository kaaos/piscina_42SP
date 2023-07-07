/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:05:37 by freduard          #+#    #+#             */
/*   Updated: 2023/06/12 17:18:43 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32 || str[c] > 126))
			return (0);
		c++;
	}
	return (1);
}

// int	main(void)
// {
// 	int a;
// 	int	i;
// 	i = ft_str_is_printable("\t (tab)");
// 	a = ft_str_is_printable("Hello");
// 	printf("%i\n", i);
// 	printf("%i", a);
// }
