# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpeyre <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 09:02:01 by gpeyre            #+#    #+#              #
#    Updated: 2023/08/03 09:10:54 by gpeyre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

nom_fichier_a="libft.a"

fichiers_sources="ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c"

options_compilation="-Wall -Wextra -Werror"

gcc $options_compilation -c $fichiers_sources
ar rcs $nom_fichier_a *.o

rm -f *.o
