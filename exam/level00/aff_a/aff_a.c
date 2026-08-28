/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 23:40:15 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/26 00:22:00 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc != 2)
	{
		write(1, "a", 1);
	}

	else
	{
		j = 0;
		while(argv[1][j])
		{
			if (argv[1][j] == 'a')
			{
				write(1, "a\n", 2);
				return 0;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
