/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:46:25 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 18:46:29 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_size;

	dest_size = (length(dest));
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	*test_string1;
	char	test_string2[20];

	test_string1 = "batatas";
	test_string2[20] = "bananas";
	
	//printf("%s", ft_strncat(test_string2, test_string1, 3));
	printf("%s", strncat(test_string2, test_string1, 3));
}
*/