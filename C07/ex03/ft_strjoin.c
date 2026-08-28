/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:18:22 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/24 21:28:03 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_sep(char *sep, int size)
{
	int	i;

	if (size <= 0)
		return (0);
	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlen(int size, char **strs)
{
	int	i;
	int	j;
	int	length;

	length = 0;
	i = 0;
	if (size <= 0)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			length++;
		}
		i++;
	}
	return (length);
}

int	ft_strcat(char *dest, char *src, int k)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[k] = src[i];
		k++;
		i++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		len_strs;
	int		len_sep;
	char	*tab;

	len_strs = ft_strlen(size, strs);
	len_sep = ft_sep(sep, size);
	tab = malloc(len_strs + (len_sep * (size - 1)) + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		k = ft_strcat(tab, strs[i], k);
		if (i < size - 1)
			k = ft_strcat(tab, sep, k);
		i++;
	}
	tab[k] = '\0';
	return (tab);
}

/*int	main(void)
{
	char	*strs[0] = {};
	char *sep;
	sep = "  ";
	char	*tab = ft_strjoin(0, strs, sep);
	printf("%s", tab);
	free (tab);
	return (0);
	printf("avant\n");
	tab = ft_strjoin(0, strs, sep);
	printf("result = [%s]\n", tab);
	printf("apres\n");
	free(tab);
}*/
