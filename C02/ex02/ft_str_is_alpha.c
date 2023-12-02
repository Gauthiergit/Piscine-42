/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:24:46 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/17 18:16:25 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str != 0)
	{
		while (str[i] != '\0')
		{
			if (!((str[i] >= 'A' && str[i] <= 'Z') 
					|| (str[i] >= 'a' && str[i] <= 'z')))
				return (0);
			i++;
		}
	}
	return (1);
}
/*int	main(void)
{
	int	valide;
	char	str[0];

	valide = ft_str_is_alpha(str);
	if (valide == 1)
		printf("Les caracteres sont valides\n");
	else
		printf("Waring !, caracteres indesirables\n");
}*/
