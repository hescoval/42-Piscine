/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:43:52 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 20:44:03 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = (length(dest));
	src_size = (length(src));
	i = 0;
	while (src[i] != '\0' && (dest_size + i < size - 1) && size != 0)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (dest_size > size)
		return (src_size + size);
	else
	{
		dest[dest_size + i] = '\0';
		return (src_size + dest_size);
	}
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	test_string1[50] = "To the real world!";
	char	test_string2[50] = "Welcome ";

	printf("%u\n", ft_strlcat(test_string1, test_string2, 17));
	//printf("%zu\n", strlcat(test_string1, test_string2, 17));
	printf("%s",test_string1);
}
*/
