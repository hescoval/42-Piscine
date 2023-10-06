/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:26:50 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/23 20:36:19 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (*str)
	{
		str ++;
		strlen ++;
	}
	return (strlen);
}
/*
#include<stdio.h>

int	main(void)
{
	char string[] = "just a test but it isnt 40";
	char string1[] = "Four";
	char string2[] = "Size 14 String";
	char *pointer;

	pointer = string;
	int length = ft_strlen(pointer);
	printf("%i \n", length);
	
	pointer = string1;
	length = ft_strlen(pointer);
	printf("%i \n", length);
	
	pointer = string2;
	length = ft_strlen(pointer);
	printf("%i \n", length);
	
	return(0);
}*/
