/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 20:14:33 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/06 20:30:52 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_invalid_heads(int **tab)
{
	int	sum;
	int	i;
	int	j;
	int	error;

	error = 0;
	j = 1;
	sum = 0;
	while (j < 5)
	{
		sum = (tab[0][j] + tab[5][j]);
		if (sum <= 2 || sum > 5)
			error = 1;
		j++;
	}
	i = 1;
	sum = 0;
	while (i < 5)
	{
		sum = (tab[i][0] + tab[i][5]);
		if (sum <= 2 || sum > 5)
			error = 1;
		i++;
	}
	return (error);
}

int	ft_validate_input_string(char *argv)
{
	int	cont;
	int	error;
	char	*cadena;

	error = 0;
	cont = 0;
	cadena = &argv[0];
	while (cadena[cont] != '\0')
	{
		if (cont % 2 == 0 || cont == 0)
			if (cadena[cont] >= '1' && cadena[cont] <= '4')
				error = 0;
			else
				error = 1;
		else if (cont % 2 != 0 || cadena[cont] != ' ')
			error = 1;
		cont++;
	}
	if (error == 1 || error == 2)
		write(1, "Error\n", 7);
	else if (cont != 31)
		write(1, "Error\n", 7);
	return (error);
}
