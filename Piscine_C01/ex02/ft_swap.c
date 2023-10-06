/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:02:37 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/21 21:18:56 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
/*
#include<stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	ft_swap(&a, &b);
	printf("%i,%i", a, b);
}*/
