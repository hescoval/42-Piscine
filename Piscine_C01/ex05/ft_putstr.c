/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 22:45:42 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/21 23:25:52 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
}
/*

#include<stdio.h>

int	main(void)
{
	char	string[] = "This is a test";
	char	*pointer;
	pointer = string;
	ft_putstr(pointer);
}*/
