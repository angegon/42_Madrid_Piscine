/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:45:11 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/14 18:15:31 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (num < 0)
	{
		ft_putchar('-');
		ft_putnbr(-num);
	}
	else
	{
		if (num > 9)
		{
			ft_putnbr(num / 10);
		}
		ft_putchar(num % 10 + '0');
	}
}
