/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:48:28 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/30 15:55:34 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] > 64 && str[index] < 91))
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}

int	alpha(char str)
{
	int	alpha;

	if ((str > 96 && str < 123))
		alpha = 1;
	else
		alpha = 0;
	return (alpha);
}

int	special_character(char str)
{
	int	special;

	if ((str < 48) || (str > 57 && str < 65) || (str > 90 && str < 97)
		|| (str > 122 && str < 127))
	{
		special = 1;
	}
	else
		special = 0;
	return (special);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 1;
	lowercase(str);
	if (alpha(str[0]))
		str[0] -= 32;
	while (str[index] != '\0')
	{
		if (special_character(str[index - 1]) && (alpha(str[index])))
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char testString[] = "salut,	CoMment tu vas ? 42mo;r";
	printf("%s \n", ft_strcapitalize(testString));
	//char testString2[] = "ola, como estas?";
	//printf("%s \n", ft_strcapitalize(testString2));
}*/
