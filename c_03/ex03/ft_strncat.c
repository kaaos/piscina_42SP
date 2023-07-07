/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:19:02 by freduard          #+#    #+#             */
/*   Updated: 2023/06/15 18:27:22 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
			d++;
	while (src[s] != '\0' && s < nb)
	{
		dest[d + s] = src[s];
			s++;
	}
	dest[d + s] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[20] = "1234";
// 	char	src[] = "567890";
// 	unsigned int	nb = 2;

// 	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
// 	ft_strncat(dest, src, nb);
// 	printf("result = %s\n-----\n", dest);

// 	return (0);
// }