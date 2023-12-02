/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:12:34 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/21 09:26:26 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while(str[j])
		{
			if (str[i] != str[j])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	jum;
	int	i;
	int	n;
	int	len;
	
	i = 0;
	jum = ft_strcmp(base);
	len = ft_strlen(base);
	while (base[i])
	{
		if (!((len <= 1) && (jum == 1)
				&& (base[i] == '+' || base[i] == '-')))
		{
			if (nbr < 0)
			{
				ft_putchar('-');
				n = -nbr;
			}
			else
				n = nbr;
			if (n >= len)
			{
				ft_putnbr(n / len);
				n %= len;
			}
			ft_putchar(base[n]);
		}
		i++;
	}	
}
int	main(void)
{
	int	nbr = 1234;
	char	base[10] = "0123456789";


}
