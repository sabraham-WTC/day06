/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:17:57 by sabraham          #+#    #+#             */
/*   Updated: 2020/06/25 16:32:53 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void 	ft_putchar(char c)
{
		write(1, &c, 1);
}

int 	main(int argc, char **argv)
{
		while(*argv[0] != '\0')
		{
			ft_putchar(*argv[0]);
			argv[0]++;
		}

		ft_putchar('\n');
		return (0);
}


