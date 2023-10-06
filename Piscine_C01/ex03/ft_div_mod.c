/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:11:28 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/21 21:18:16 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int*div, int*mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
#include<stdio.h>
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 6;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%i, %i", div, mod);
}*/
