/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:15:59 by freduard          #+#    #+#             */
/*   Updated: 2023/07/11 12:03:35 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (--power)
		result *= nb;
	return (result);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		printf("ERROR :: invalid number of args\n");
// 	else
// 		printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
// 	return (0);
// }
