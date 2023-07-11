/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:17:58 by freduard          #+#    #+#             */
/*   Updated: 2023/07/11 12:03:46 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		printf("ERROR :: invalid number of args\n");
// 	else
// 		printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
// 	return (0);
// }