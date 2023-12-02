/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:13:19 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/15 08:53:12 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int A, int B)
{
	char	chiffre;

	chiffre = 48 + A / 10;
	write(1, &chiffre, 1);
	chiffre = 48 + A % 10;
	write(1, &chiffre, 1);
	write(1, " ", 1);
	chiffre = 48 + B / 10;
	write(1, &chiffre, 1);
	chiffre = 48 + B % 10;
	write(1, &chiffre, 1);
	if (A != 98 || B != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			print(a, b);
			b++;
		}
		a++;
	}
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
