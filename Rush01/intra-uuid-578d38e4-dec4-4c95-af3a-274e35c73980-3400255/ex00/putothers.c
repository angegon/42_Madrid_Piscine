/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putothers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 08:30:58 by pperez-m          #+#    #+#             */
/*   Updated: 2020/12/06 22:25:31 by cpiniell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_while(int *tabitres)
{
	int a;
	int algo3;

	a = 0;
	algo3 = 0;
	while (a <= 4)
	{
		if (tabitres[a] == 1 || tabitres[a] == 2
		|| tabitres[a] == 3)
			algo3 = 4;
		else if (tabitres[a] == 1 || tabitres[a] == 3
		|| tabitres[a] == 4)
			algo3 = 2;
		else if (tabitres[a] == 2 || tabitres[a] == 3
		|| tabitres[a] == 4)
			algo3 = 1;
		else if (tabitres[a] == 1 || tabitres[a] == 2
		|| tabitres[a] == 4)
			algo3 = 3;
		a++;
	}
	return (algo3);
}

void	ft_othersthree(int **tab)
{
	int	tabi3[4] = {0, 0, 0, 0};
	int tabj3[4] = {0, 0, 0, 0};
	int	fila3;
	int	colu3;
	int i;
	int j;

	fila3 = 0;
	colu3 = 0;
	j = 1;
	while (j <= 4)
	{
		i = 1;
		while (i <= 4)
		{
			if (tab[i][j] == 3)
			{
				tabi3[i] = i;
				tabj3[j] = j;
			}
			i++;
		}
		j++;
	}
	colu3 = ft_while(tabi3);
	fila3 = ft_while(tabj3);
	tab[fila3][colu3] = 3;
}

void	ft_sumcolumns(int **tab)
{
	int c;
	int f;

	c = 1;
	while (c <= 4)
	{
		f = 1;
		while (f <= 4)
		{
			if ((tab[1][c] + tab[2][c] + tab[3][c] + tab[4][c] == 9) &&
					tab[f][c] == 0)
				tab[f][c] = 1;
			else if ((tab[1][c] + tab[2][c] + tab[3][c] + tab[4][c] == 8) &&
					tab[f][c] == 0)
				tab[f][c] = 2;
			f++;
		}
		c++;
	}
}

void	ft_sumrows(int **tab)
{
	int f;
	int c;

	f = 1;
	while (f <= 4)
	{
		c = 1;
		while (c <= 4)
		{
			if ((tab[f][1] + tab[f][2] + tab[f][3] + tab[f][4] == 9) &&
					tab[f][c] == 0)
				tab[f][c] = 1;
			else if ((tab[f][1] + tab[f][2] + tab[f][3] + tab[f][4] == 8) &&
					tab[f][c] == 0)
				tab[f][c] = 2;
			c++;
		}
		f++;
	}
}
