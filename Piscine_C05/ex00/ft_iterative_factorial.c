/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:44:18 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:44:36 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nb--;
	while (nb > 0)
	{
		result *= nb;
		nb--; 
	}
	return (result);
}
/*
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char **argv)
{
	printf("%i", ft_iterative_factorial(atoi(argv[1])));
}
*/
