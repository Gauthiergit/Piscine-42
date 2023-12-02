/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:48:26 by gpeyre            #+#    #+#             */
/*   Updated: 2023/07/20 10:06:50 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	lendest;

	i = 0;
	lendest = ft_strlen(dest);
	while (src[i] && nb > 0)
	{
		dest[lendest + i] = src[i];
		i++;
		nb--;
	}
	dest[lendest + i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	dest[80] = "J'aime";
	char	src[] = " les chats";

	printf("%s\n", ft_strncat(dest, src, 8));
}*/
