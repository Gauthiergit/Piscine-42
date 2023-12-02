/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:46:51 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/16 11:07:13 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*int	main(void)
{
	int	nombreA;
	int	nombreB;

	nombreA = 1;
	nombreB = 10;

	ft_ultimate_div_mod(&nombreA, &nombreB);

	printf("%d", nombreA);
	printf("%d", nombreB);
}*/
