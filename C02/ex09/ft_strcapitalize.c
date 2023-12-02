/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:00:33 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/17 18:34:53 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nouveau_mot;

	i = 0;
	nouveau_mot = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!nouveau_mot)
				str[i] = str[i] + 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (nouveau_mot)
				str[i] = str[i] - 32;
			nouveau_mot = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			nouveau_mot = 0;
		else
			nouveau_mot = 1;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
}*/
