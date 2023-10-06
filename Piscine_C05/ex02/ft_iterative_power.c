/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:44:57 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:44:58 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (1 < power)
	{
		a = a * nb; 
		power --;
	}
	return (a);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	printf("%i", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
*/
