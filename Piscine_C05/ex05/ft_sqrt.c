/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:45:15 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:45:18 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb % 10 == 2 || nb % 10 == 3 || nb % 10 == 7 || nb % 10 == 8)
		return (0);
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		count++;
	}
	if (nb == 0)
		return (count);
	return (0);
}
/*
#include<stdio.h>
#include <stdlib.h>
int main(int av, char **av)
{
	printf("%i", ft_sqrt(atoi(av[1])));
}
*/
