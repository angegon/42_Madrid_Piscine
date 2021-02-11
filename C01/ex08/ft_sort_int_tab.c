/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:50:13 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/14 18:38:52 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cont1;
	int cont2;
	int aux;

	cont1 = 0;
	cont2 = 1;
	while (cont1 < size)
	{
		cont2 = cont1 + 1;
		while (cont2 < size)
		{
			if (tab[cont1] > tab[cont2])
			{
				aux = tab[cont1];
				tab[cont1] = tab[cont2];
				tab[cont2] = aux;
			}
			cont2++;
		}
		cont1++;
	}
}
