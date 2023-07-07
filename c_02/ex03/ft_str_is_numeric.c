/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:31:56 by freduard          #+#    #+#             */
/*   Updated: 2023/06/12 22:34:46 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= '0' && str[c] <= '9'))
			return (0);
		c++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	i;
// 	int j;
//  int k;
// 	i = ft_str_is_numeric("não é numérico");
// 	j = ft_str_is_numeric("0123456789");
//  	k = ft_str_is_numeric("");
// 	printf("%i\n", i);
// 	printf("%i\n", j);
// 	printf("%i\n", k);
// }
