/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 21:43:00 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/17 17:52:22 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		aux;

	aux = 2;
	if (nb < 0 || nb == 1 || nb == 0)
		return (0);
	if (nb == 3)
		return (1);
	while (aux < nb)
	{
		if (nb % aux == 0)
			return (0);
		aux++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb + 1;
	while (!ft_is_prime(i))
		++i;
	return (i);
}
