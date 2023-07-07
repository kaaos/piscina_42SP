/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:58:48 by freduard          #+#    #+#             */
/*   Updated: 2023/06/15 17:41:53 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
			d++;
			s++;
	}
	dest[d] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[10] = "C";
	char	src[10] = " is fine!";

	ft_strcat(dest, src);
	printf("result: %s\n", dest);
	return (0);
}
