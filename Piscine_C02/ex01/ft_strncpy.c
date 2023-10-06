/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:19:16 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:21:35 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((index < n) && (src[index] != '\0'))
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "source array copy";
	int bytes = 10;
	char copy_string[17];
	
	ft_strncpy(copy_string, string, bytes);
	printf("%s", copy_string);
}*/
