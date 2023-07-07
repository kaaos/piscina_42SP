/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:35:39 by freduard          #+#    #+#             */
/*   Updated: 2023/06/06 14:08:31 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	int	length;
// 	int	aux;
// 	char	uni;
// 	char	dec;

// 	length = ft_strlen("C is fine! Swimming is great!");

// 	aux = length / 10;
// 	dec = aux + '0';

// 	aux  = length % 10;
// 	uni = aux +'0';

// 	write(1, &dec, 1);
// 	write(1, &uni, 1);
// }