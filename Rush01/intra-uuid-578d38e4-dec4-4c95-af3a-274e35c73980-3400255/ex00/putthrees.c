/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putthrees.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 21:34:28 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/06 22:32:15 by cpiniell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_putthree_two(int **tab)
{
	int j;
	int controlador;

	controlador = 0;
	j = 1;
	while (j <= 4)
	{
		if (tab[0][j] == 2 && tab[5][j] == 3)
		{
			tab[2][j] = 4;
			controlador++;
		}
		if (tab[0][j] == 3 && tab[5][j] == 2)
		{
			tab[3][j] = 4;
			controlador++;
		}
		j++;
	}
	return (controlador);
}

int		ft_putthree_rows(int **tab)
{
	int i;
	int controlador;

	controlador = 0;
	i = 1;
	while (i <= 4)
	{
		if (tab[i][0] == 2 && tab[i][5] == 3)
		{
			tab[i][2] = 4;
			controlador++;
		}
		if (tab[i][0] == 3 && tab[i][5] == 2)
		{
			tab[i][3] = 4;
			controlador++;
		}
		i++;
	}
	return (controlador);
}

void	ft_three_two(int **tab)
{
	int j;

	j = 1;
	while (j <= 4)
	{
		if (tab[0][j] == 1 && tab[5][j] == 2)
			tab[4][j] = 3;
		if (tab[5][j] == 1 && tab[0][j] == 2)
			tab[1][j] = 3;
		j++;
	}
}

void	ft_two_three(int **tab)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		if (tab[i][0] == 1 && tab[i][5] == 2)
			tab[i][4] = 3;
		if (tab[i][5] == 1 && tab[i][0] == 2)
			tab[i][1] = 3;
		i++;
	}
}
