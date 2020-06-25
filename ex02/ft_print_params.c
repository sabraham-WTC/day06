/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:45:09 by sabraham          #+#    #+#             */
/*   Updated: 2020/06/25 16:56:31 by sabraham         ###   ########.fr       */
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
		int j;
		j = 0;

		while (j++ < (argc - 1))
		{
			while (*argv[j] != '\0')
			{
				ft_putchar(*argv[j]);
				argv[j]++;
			}

			ft_putchar('\n');
		}
		return (0);
}
