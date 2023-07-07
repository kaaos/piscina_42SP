/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freduard <freduard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:43:23 by freduard          #+#    #+#             */
/*   Updated: 2023/06/12 17:58:20 by freduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

/* int    main()
{
    char a[] = "SALUT, cOMment tu vas? 40mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(a));
} */