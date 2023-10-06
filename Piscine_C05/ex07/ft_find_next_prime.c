/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:45:26 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:45:27 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	else if (ft_is_prime(nb))
		return (nb);
	else
		nb = ft_find_next_prime(nb + 1);
	return (nb);
}
/*
#include<stdlib.h>
#include<stdio.h>
int	main(int argc, char** argv)
{
	(void) argc;
	printf("%i", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/
