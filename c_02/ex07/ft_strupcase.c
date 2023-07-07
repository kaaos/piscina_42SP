/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:10:53 by freduard          #+#    #+#             */
/*   Updated: 2023/06/12 17:36:28 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 97) && (str[c] <= 122))
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "c is fine! swimming is great!";
//     printf("Antes: %s\n", str);
// 	ft_strupcase(str);
// 	printf("Depois: %s\n", str);
// 	return (0);
// }
