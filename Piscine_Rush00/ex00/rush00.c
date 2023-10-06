/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:18:20 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/22 19:18:26 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char x);

void	print_coords(int curr_x, int curr_y, int x, int y)
{
	if ((curr_x == 1 && curr_y == 1) || (curr_x == 1 && curr_y == y)
		|| (curr_x == x && curr_y == 1) || (curr_x == x && curr_y == y))
	{
		ft_putchar('o');
	}
	else if ((curr_x == 1 || curr_x == x))
	{
		ft_putchar('|');
	}
	else if ((curr_y == 1 || curr_y == y))
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int max_x, int max_y)
{
	int		x;
	int		y;

	x = 1;
	y = 1;
	if (max_x > 0 && max_y > 0)
	{
		while (y <= max_y)
		{
			while (x <= max_x)
			{
				print_coords(x, y, max_x, max_y);
				x++;
			}
			ft_putchar('\n');
			y++;
			x = 1;
		}
	}
	else
	{
		write(1, "Stop trying to crash me.", 25);
	}
}
