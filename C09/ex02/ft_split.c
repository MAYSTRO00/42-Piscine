/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 17:51:35 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/25 19:19:00 by mohadj-a         ###   ########.fr       */
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

char	*make_word(char *str, char *charset)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (str[len] && check_sep(str[len], charset) == 1)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		i;

	size = get_size_tab(str, charset);
	tab = (char **)malloc((size + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*str && check_sep(*str, charset) == 0)
			str++;
		if (*str)
		{
			tab[i] = make_word(str, charset);
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

	str = "HELLO WORLD WELCOME TO 42 THE LAST EXERCICE FOR ME";
	charset = " ";
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
