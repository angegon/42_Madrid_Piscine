/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 22:22:37 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/16 10:35:46 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (factorial);
	else
	{
		while (nb > 0)
		{
			factorial = factorial * nb;
			nb--;
		}
		return (factorial);
	}
}
