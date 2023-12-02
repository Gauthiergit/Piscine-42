/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:39:59 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/16 11:03:03 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temporaire;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
/*int	main(void)
{
	int	nombreA;
	int	nombreB;

	nombreA = 1;
	nombreB = 2;

	ft_swap(&nombreA, &nombreB);

	char	chr;
	chr = nombreA + 48;
	write(1, &chr, 1);
	write(1, "\n", 1);
	chr = nombreB + 48;
        write(1, &chr, 1);
}*/
