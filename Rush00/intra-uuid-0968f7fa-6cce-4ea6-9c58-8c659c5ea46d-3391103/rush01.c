/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-f <alopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 09:37:56 by alopez-f          #+#    #+#             */
/*   Updated: 2020/11/29 12:03:54 by alopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void	rush(int x, int y)
{
	int cc;
	int cf;

	cc = 1;
	cf = 1;
	while (cf <= y)
	{
		while (cc <= x)
		{
			if (cc == 1 && cf == 1)
				ft_putchar('/');
			else if ((cc == 1 && cf == y) || (cc == x && cf == 1))
				ft_putchar(+92);
			else if (cc == x && cf == y)
				ft_putchar('/');
			else if ((cf == 1 || cf == y) || (cc == 1 || cc == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			cc++;
		}
		cf++;
		cc = 1;
		ft_putchar('\n');
	}
}
