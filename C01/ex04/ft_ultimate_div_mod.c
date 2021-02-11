/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:19:21 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/03 12:02:53 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int division;
	int resto;

	division = 0;
	resto = 0;
	division = *a / *b;
	resto = *a % *b;
	*a = division;
	*b = resto;
}
