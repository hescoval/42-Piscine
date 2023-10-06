/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:45:13 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:31:22 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*pointer;

	pointer = str;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			*str += 32;
		}
		str++;
	}
	str = pointer;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char testString[] = "HAHAHAH3#@AH!!A";
	char testString2[] = "WOOOOOOW";
	char testString3[] = "nice one man, NOT funny.";

	printf("%s \n", ft_strlowcase(testString));
	
	printf("%s \n", ft_strlowcase(testString2));

	printf("%s \n", ft_strlowcase(testString3));
}*/