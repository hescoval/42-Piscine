/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 06:48:16 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:56:21 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	length(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (dest[0] == 0)
		return (length(src));
	i = 0;
	if (src[0] != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		while (src[i])
		{
			i++;
		}
	}
	return (i);
}
/*
#include<stdio.h>
#include<bsd/string.h>
int	main(void)
{
	char test_string[] = "ASDASD";
	char dest_string[] = "AY";
	char test_string1[] = "ASDASD";
	char dest_string2[] = "AY";
	int size = 0;
	//unsigned int total_size_needed = ft_strlcpy(dest_string, test_string, size);
	
	printf("strlcpy result %zu \n", strlcpy(dest_string2 , test_string1, size));
	printf("your result was %i size", ft_strlcpy(dest_string, test_string, size));
	printf("\n all you got was : %s", dest_string);
	printf("\n strlcpy got : %s", dest_string2);
	
}

*/