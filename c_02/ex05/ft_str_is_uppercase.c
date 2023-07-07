/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:50:17 by freduard          #+#    #+#             */
/*   Updated: 2023/06/12 17:28:47 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'A' && str[c] <= 'Z'))
			return (0);
		c++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	i;
// 	int j;
// 	int k;
// 	i = ft_str_is_uppercase("QUERTY");
// 	j = ft_str_is_uppercase("qwerty!123456");
// 	k = ft_str_is_uppercase("");
// 	printf("%i\n", i);
// 	printf("%i\n", j);
// 	printf("%i\n", k);
// 	return(0);
// }