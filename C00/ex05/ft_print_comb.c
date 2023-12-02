/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:50:11 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/15 08:44:10 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	print(int A, int B, int C);

void	print(int A, int B, int C)
{
	char	chiffre;

	chiffre = A + 48;
	write(1, &chiffre, 1);
	chiffre = B + 48;
	write(1, &chiffre, 1);
	chiffre = C + 48;
	write(1, &chiffre, 1);
	if (A != 7 || B != 8 || C != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
