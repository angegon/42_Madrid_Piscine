/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:43:21 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/12 13:51:32 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribe(int n, int b, int c)
{
	write(1, &n, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(n == '7' && b == '8' && c == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0' - 1;
	b = '1';
	c = '2';
	while (++a <= '7')
	{
		b = a;
		while (++b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				escribe(a, b, c);
				c++;
			}
		}
	}
}
