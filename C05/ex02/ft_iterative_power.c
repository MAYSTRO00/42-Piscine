/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:46:12 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/13 21:01:26 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	result = ft_iterative_power(5, 2);
	printf("%d\n", result);
}*/
