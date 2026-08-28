/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohadj-a <mohadj-a@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 18:56:30 by mohadj-a          #+#    #+#             */
/*   Updated: 2026/08/09 17:18:46 by mohadj-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_get_char_pos(int x, int y, int row, int column)
{
	if (row == 0 || row == y - 1)
	{
		if (column == 0 || column == (x - 1))
			return ('o');
		else
			return ('-');
	}
	else
	{
		if (column == 0 || column == x - 1)
			return ('|');
		else
			return (' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	column = 0;
	while (row < y)
	{
		while (column < x)
		{
			ft_putchar(ft_get_char_pos(x, y, row, column));
			column++;
		}
		ft_putchar('\n');
		column = 0;
		row++;
	}
}
