/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:52:42 by freduard          #+#    #+#             */
/*   Updated: 2023/06/15 15:04:08 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str < 14 && *str > 8))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
	str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	return (number * sign);
}

// int	main(void)
// {
// 	char	str[] = "          \n ---+--+1234567ab567";

// 	printf("Retorna: %d\n", ft_atoi(str));
// }
