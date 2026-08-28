/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:56:04 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/06 16:40:10 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}


int	main (void)
{
	int	c[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	ft_rev_int_tab (c, 10);
	
	int i = 0;

	while (i < 10)
	{
		printf("%d", c[i]);
	i++;
	}	
	return (0);
}

