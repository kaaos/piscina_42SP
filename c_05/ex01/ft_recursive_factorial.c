/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:43:24 by freduard          #+#    #+#             */
/*   Updated: 2023/07/11 12:02:54 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// // int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		printf("ERROR :: invalid number of args\n");
// 	else
// 		printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
// 	return (0);
// }
