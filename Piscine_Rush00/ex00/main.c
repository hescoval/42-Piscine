/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 03:07:39 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/23 03:19:55 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int max_x, int max_y);

void	ft_putchar(char x);

int	main(void)
{
	rush(0, -1);
	ft_putchar('\n');
	rush(1, 2);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(2, 1);
	ft_putchar('\n');
	rush(5, 5);
	return (0);
}
