/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:45:08 by hescoval          #+#    #+#             */
/*   Updated: 2023/08/09 18:45:09 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void) ac;
	printf("%i", ft_fibonacci(atoi(av[1])));
}*/