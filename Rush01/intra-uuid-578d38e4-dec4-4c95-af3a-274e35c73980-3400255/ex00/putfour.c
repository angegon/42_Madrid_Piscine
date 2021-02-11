/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putfour.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:08:59 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/06 22:32:51 by cpiniell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putfourone(int **tab)
{
	int j;

	j = 1;
	while (j <= 4)
	{
  		if (tab[0][j] == 4)
		{
			tab[1][j] = 1;
			tab[2][j] = 2;
			tab[3][j] = 3;
			tab[4][j] = 4;
		}
		if (tab[5][j] == 4)
        {
			tab[4][j] = 1;
			tab[3][j] = 2;
			tab[2][j] = 3;
			tab[1][j] = 4;
        }
		j++;
	}
}

void	ft_putonefour(int **tab)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		if (tab[i][0] == 4)
		{
			tab[i][1] = 1;
			tab[i][2] = 2;
			tab[i][3] = 3;
			tab[i][4] = 4;
		}
		if (tab[i][5] == 4)
        {
			tab[i][1] = 4;
			tab[i][2] = 3;
			tab[i][3] = 2;
			tab[i][4] = 1;
		}
		i++;
	}
}

void	ft_putfourwhenone(int **tab)
{
	int j;
	int i;

	j = 1;
	while (j <= 4)
	{
		if (tab[0][j] == 1)
			tab[1][j] = 4;
		if (tab[5][j] == 1)
			tab[4][j] = 4;
		j++;
	}
	i = 1;
	while (i <=4)
	{
		if (tab[i][0] == 1)
			tab[i][1] = 4;
		if (tab[i][5] == 1)
			tab[i][4] = 4;
		i++;
	}
}

int		ft_whilefour(int *tabifour)
{
	int	pos;
	int a;

	pos = 2;
	a = 0;
	while (a <= 3)
	{
		if (tabifour[a] == 0 || tabifour[a] == 1 || tabifour[a] == 2)
			pos = 3;
		else
			pos = 2;
		a++;
	}
	return (pos);
}

void	ft_restfour(int **tab)
{
	int j;
	int i;
	int	tabi[4] = {0, 0, 0, 0};
	int	tabj[4] = {0, 0, 0, 0};
	int row;
	int col;

	j = 1;
	while (j <= 4)
	{
		i = 1;
		while (i <= 4)
		{
			if (tab[i][j] == 4)
			{
				tabi[i] = i;
				tabj[j] = j;
			}
			i++;
		}
		j++;
	}
	row = ft_whilefour(tabi);
	col = ft_whilefour(tabj);
	tab[row][col] = 4;
}
