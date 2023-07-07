/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:40:18 by freduard          #+#    #+#             */
/*   Updated: 2023/06/15 17:39:25 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	unsigned int	n;

	n = 4;
	char	s1[] = "C iz fine";
	char	s2[] = "C is çgreat";
	char	s3[] = "C is amazing";
	printf("s1 - s2 = %d\n", ft_strncmp(s1, s2, n));
	printf("s2 - s3 = %d\n", ft_strncmp(s2, s3, n));
	printf("return s1 - s2 = %d\n", strncmp(s1, s2, n));
	printf("return s2 - s3 = %d\n", strncmp(s2, s3, n));
	return (0);
}
