/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 11:53:28 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/24 21:27:16 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		length;
	int		i;

	length = ft_strlen(src);
	str = malloc(length + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*cp;

	str = "hello my guy it`s a good day";
	cp = ft_strdup(str);
	printf("original :%s\n", str);
	printf("copy :%s\n", cp);
	free(cp);
	return (0);
}*/
