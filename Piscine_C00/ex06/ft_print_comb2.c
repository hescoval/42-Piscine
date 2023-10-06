/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:54:34 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 17:57:24 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	first_group;
	int	second_group;

	first_group = 0;
	while (first_group <= 98)
	{
		second_group = first_group + 1;
		while (second_group <= 99)
		{
			ft_putchar(first_group / 10 + '0');
			ft_putchar(first_group % 10 + '0');
			ft_putchar(' ');
			ft_putchar((second_group / 10) + '0');
			ft_putchar((second_group % 10) + '0');
			if (first_group != 98 || second_group != 99)
				write(1, ", ", 2);
			second_group++;
		}
		first_group++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
