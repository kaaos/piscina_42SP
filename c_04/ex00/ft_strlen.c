/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:27:49 by freduard          #+#    #+#             */
/*   Updated: 2023/06/15 15:00:04 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	s;

	s = 0;
	while (str[s] != '\0')
		s ++;
	return (s);
}

// int	main(void)
// {
// 	int	len;
// 	int	aux;
// 	char	uni;
// 	char	dec;

// 	len = ft_strlen("C is fine! Swimming is great!");

// 	aux = len / 10;
// 	dec = aux + '0';

// 	aux  = len % 10;
// 	uni = aux +'0';

// 	write(1, &dec, 1);
// 	write(1, &uni, 1);
// }