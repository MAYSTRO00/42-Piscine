/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:01:47 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/05 11:40:44 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a/10 + '0');
			print(a%10 + '0');
			print(' ');
			print(b/10 + '0');
			print(b%10 + '0');
		if(!(a == 98 && b == 99))
		write(1, ", ", 2);
		b++;
	a++;	}
	}	
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}


