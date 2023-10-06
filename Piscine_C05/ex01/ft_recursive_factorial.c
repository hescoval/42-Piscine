/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:44:49 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:44:50 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("%i", ft_recursive_factorial(atoi(argv[1])));
}
*/