/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:20:40 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/10 11:05:44 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				lenght;

	i = 0;
	lenght = 0;
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (lenght);
}
/*
int	main(void)
{
	char	s[]= "hello";
	char	d[10] = "";
	int	c;
	c = ft_strlcpy(d, s, 10);
	printf("%s\n", d);
	printf("%d", c);
}*/
