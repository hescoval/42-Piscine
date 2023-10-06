/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:00:57 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/20 15:27:21 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	zero;

	zero = '0';
	while (zero <= '9')
	{
		write (1, &zero, 1);
		zero ++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
