/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 21:41:56 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/24 21:26:27 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	get_size_tab(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (check_sep(str[i], charset) == 0)
			i++;
		else
		{
			count++;
			while (str[i] && check_sep(str[i], charset) == 1)
				i++;
		}
	}
	return (count);
}

char	*ft_get_word(char *str, char *charset)
{
	int		length;
	char	*tab;
	int		i;

	length = 0;
	while (str[length] && check_sep(str[length], charset) == 1)
		length++;
	tab = (char *)malloc((length + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		i;

	size = get_size_tab(str, charset);
	tab = malloc((size + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && check_sep(*str, charset) == 0)
			str++;
		if (*str)
		{
			tab[i] = ft_get_word(str, charset);
			i++;
			while (*str && check_sep(*str, charset) == 1)
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

/*int	main(void)
{
	char	*str;
	char	*charset;
	char	**strs;
	int		i;

	str = "hello--world--it`s--42";
	charset = " /;.-";
	strs = ft_split(str, charset);
	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}*/
