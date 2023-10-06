/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:47:34 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 17:47:36 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		if (nbr >= 10)
		{
			ft_putnbr(nbr / 10);
		}
		printchar(nbr % 10 + '0');
	}
}
/*
int	main(void)
{
	ft_putnbr(-123);
}
*/
