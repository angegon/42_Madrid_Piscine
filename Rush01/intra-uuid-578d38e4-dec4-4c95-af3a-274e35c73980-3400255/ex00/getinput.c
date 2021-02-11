/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getinput.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:01:36 by cpiniell          #+#    #+#             */
/*   Updated: 2020/12/06 20:14:48 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_arr(int **tab)
{
	int i;
	int j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(tab[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		**ft_makemal(void)
{
	int r;
	int c;
	int i;
	int **tab;

	r = 6;
	c = 6;
	i = 0;
	tab = (int **)malloc(r * sizeof(int *));
	while (i < r)
	{
		tab[i] = (int *)malloc(c * sizeof(int));
		i++;
	}
	return (tab);
}

int		**ft_fillzero(int **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

int		**ft_border(char *argv)
{
	int k;
	int num;
	int **tab;

	k = 1;
	tab = ft_fillzero(ft_makemal());
	while (k < 17)
	{
		num = *argv - '0';
		if (k <= 4)
			tab[0][k] = num;
		else if ((k > 4) && (k <= 8))
			tab[5][k - 4] = num;
		else if ((k > 8 && k <= 12))
			tab[k - 8][0] = num;
		else
			tab[k - 12][5] = num;
		argv += 2;
		k++;
	}
	return (tab);
}
