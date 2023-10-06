/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:58:33 by hescoval          #+#    #+#             */
/*   Updated: 2023/07/24 17:25:52 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	smallest_number;
	int	index;
	int	smallest_number_index;

	index = 0;
	smallest_number = *tab;
	while (index < size)
	{
		if (tab[index] < smallest_number)
		{
			smallest_number = tab[index];
			smallest_number_index = index;
			ft_swap(tab, &tab[smallest_number_index]);
		}
		index++;
	}
	if (size > 1)
		ft_sort_int_tab((tab + 1), (size - 1));
}
/*

#include<stdio.h>
int     main(void)
{
    int test_array[] = {10, 4, 0, 37, -15, 1};
    int size = 6;
    
    ft_sort_int_tab(test_array, size);

    for(int i = 0; i < size; i++)
    {
        printf("%i, ",test_array[i]);
    }
    return (0);
}


[2, 1, 4, 5]
[1, 2, 8, 4]
*/
