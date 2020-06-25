# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabraham <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 13:11:26 by sabraham          #+#    #+#              #
#    Updated: 2020/06/25 13:27:51 by sabraham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_strcmp.c ft_swap.c ft_putstr.c ft_strlen.c
ar rc libft.a ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
