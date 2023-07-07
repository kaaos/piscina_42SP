/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaos <kaaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:43:41 by freduard          #+#    #+#             */
/*   Updated: 2023/06/22 11:37:47 by kaaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	main(void)
// {
// 	char	s1[] = "C is fine";
// 	char	s2[] = "C is çgreat";
// 	char	s3[] = "C is amazing";
// 	printf("return s1 - s2 = %d\n", ft_strcmp(s1, s2));
// 	printf("return s2 - s3 = %d\n", ft_strcmp(s2, s3));
// 	printf("return s1 - s2 = %d\n", strcmp(s1, s2));
// 	printf("return s2 - s3 = %d\n", strcmp(s2, s3));
// 	return (0);
// }