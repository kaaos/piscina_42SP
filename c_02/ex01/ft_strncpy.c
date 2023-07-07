/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:52:38 by freduard          #+#    #+#             */
/*   Updated: 2023/06/13 18:35:53 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "C is fine!";
// 	char dest[] = "Swimming is great!";
// 	unsigned int n;

// 	n = 9;

// 	printf("Antes\n\tsrc: %s\n\tdes: %s\n", src, dest);

// 	ft_strncpy(dest, src, n);

// 	printf("Depois\n\tsrc: %s\n\tdes: %s\n", src, dest);
// 	return (0);
// }