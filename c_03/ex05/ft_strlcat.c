/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:16:01 by freduard          #+#    #+#             */
/*   Updated: 2023/06/14 22:19:29 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	s;

	s = 0;
	while (str[s] != '\0')
		s ++;
	return (s);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sr;
	unsigned int	dest_len;
	unsigned int	src_len;

	sr = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len + 1)
	{
		while (src[sr] != '\0' && dest_len + 1 + sr < size)
		{
			dest[dest_len + sr] = src[sr];
			sr++;
		}
	}
	dest[dest_len + sr] = '\0';
	if (size < dest_len)
		return (size + src_len);
	else
		return (dest_len + src_len);
}

// int	main(void)
// {
// 	char	source[10] = "C is fine!!!";
// 	char	destin[13] = "is fine!";
// 	unsigned int	n;

// 	n = 9;
// 	printf("source: %s\n", source);
// 	printf("destin: %s\n", destin);
// 	printf("result: %d\n", ft_strlcat(destin, source, n));
// 	return (0);
// }
