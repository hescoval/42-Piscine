/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:45:01 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:45:02 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb = nb * (ft_recursive_power(nb, power - 1));
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	printf("%i", ft_recursive_power(atoi(argv[1]) , atoi(argv[2])));
}
*/
