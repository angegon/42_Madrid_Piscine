/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 16:18:22 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/17 15:35:38 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int j;
	int cont;

	i = 1;
	j = 0;
	cont = 0;
	if (argc >= 0)
	{
		while (argv[cont])
			cont++;
		cont = cont - 1;
		while (argv[cont] && cont > 0)
		{
			while (argv[cont][j] != '\0')
			{	
				ft_putchar(argv[cont][j]);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			cont--;
		}
	}
}
