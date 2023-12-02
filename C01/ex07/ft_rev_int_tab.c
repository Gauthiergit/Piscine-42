/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:28:45 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/16 11:14:04 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*int	main(void)
{
	int	i;
	int	table[3] = {1, 2, 3};

	i = 0;
	ft_rev_int_tab(table, 3);
	while (i < 3)
	{
		printf("%d", table[i++]);
	}
}*/
