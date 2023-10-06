/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:03:02 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/25 23:03:04 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporary_a;
	int	temporary_b;

	temporary_a = *a;
	temporary_b = *b;
	*a = temporary_a / temporary_b;
	*b = temporary_a % temporary_b;
}
/*
#include<stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 6;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%i , %i", a, b);
}*/
