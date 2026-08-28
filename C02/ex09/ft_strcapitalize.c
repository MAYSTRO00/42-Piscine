/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 23:26:30 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/10 00:04:00 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
			str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && !((str[i - 1] >= 'a'
					&& str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && ((str[i - 1] >= 'a' && str[i
						- 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut,cOMment tu vas?";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/
