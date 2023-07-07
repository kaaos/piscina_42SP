/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:15:40 by freduard          #+#    #+#             */
/*   Updated: 2023/06/12 17:18:33 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	i;
// 	i = ft_str_is_alpha("as@d");
// 	printf("%i", i);
// 	return(0);
// }

// int	main(void)
// {
//     char str1[] = "Cisfine";
//     char str2[] = "1234567890";    
//     int result1 = ft_str_is_alpha(str1);
//     int result2 = ft_str_is_alpha(str2);    
//     printf("Str 1 is alphabetic: %s\n", result1 ? "True" : "False");
//     printf("Str 2 is alphabetic: %s\n", result2 ? "True" : "False");
//     return (0);
// }