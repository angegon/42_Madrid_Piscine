/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:40:26 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/14 18:40:14 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int cont;
	int aux;

	cont = 1;
	while (cont <= (size / 2))
	{
		aux = tab[size - cont];
		tab[size - cont] = tab[cont - 1];
		tab[cont - 1] = aux;
		cont++;
	}
}
