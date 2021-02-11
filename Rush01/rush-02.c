/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 11:59:11 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/06 17:46:44 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	init_matrix(char matrix[6][6])
{
	int r;
	int c;

	r = 0;
	c = 0;
	while (r < 6)
	{
		c = 0;
		while (c < 6)
		{
			matrix[r][c] = ' ';
			c++;
		}
		r++;
	}
}

void	put_heads_in_matrix(char matrix[6][6], char parameters[])
{
	int r;
	int c;
	int cont;
	int auxc;
	int auxr;

	r = 0;
	c = 0;
	cont = 0;
	auxc = 0;
	auxr = 0;
	while (parameters[cont] != '\0')
	{
		//write(1, &parameters[cont], 1);
		if ((cont % 2 == 0 || cont == 0) && cont < 7)
		{
			matrix[0][c + 1] = parameters[cont];
			c++;
		}
		if ((cont % 2 == 0 || cont == 0) && (cont >  6 && cont < 15))
		{
			matrix[5][auxc + 1] = parameters[cont];
			auxc++;
		}
		if ((cont % 2 == 0 || cont == 0) && cont > 14 && cont < 23)
		{
			matrix[r + 1][0] = parameters[cont];
			r++;
		}
		if ((cont % 2 == 0 || cont == 0) && cont > 22 && cont < 31)
		{
			matrix[auxr + 1][5] = parameters[cont];
			auxr++;
		}
		cont++;
	}
}

void	write_matrix(char matrix[6][6])
{
	int r;
	int c;

	r = 0;
	c = 0;
	write(1, "\n", 1);
	while (r < 6)
	{
		c = 0;
		while (c < 6)
		{
			write(1, &matrix[r][c], 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
	write(1, "\n", 1);
}

int		invalid_heads(char matrix[6][6])
{
	int sum;
	int i;
	int j;
	int error;

	error = 0;
	j = 1;
	sum = 0;
	while (j < 5)
	{
		sum = (matrix[0][j] + matrix[5][j]);
		if (sum <= 2 || sum > 5)
			error = 1;
		j++;
	}
	i = 1;
	sum = 0;
	while (i < 5)
	{
		sum = (matrix[i][0] + matrix[i][5]);
		if (sum <= 2 || sum > 5)
			error = 1;
		i++;
	}
	return (error);
}

void	rush_01(char p[])
{
	char matrix[6][6];

	init_matrix(matrix);
	put_heads_in_matrix(matrix, p);
	if (invalid_heads(matrix))
		write(1, "Error.7", 7);
	else
	{
		write_matrix(matrix);
	}
}

int		validate_input_string(char p[])
{
	int cont;
	int error;
	char *cadena;

	error = 0;
	cont = 0;
	cadena = &p[0];
	while (cadena[cont] != '\0')
	{
		if (cont % 2 == 0 || cont == 0)
			if (cadena[cont] >= '1' && cadena[cont] <= '4')
				error = 0;
			else
				error = 1;
		else if (cont % 2 != 0 || cadena[cont] != ' ')
			error = 2;
		cont++;
	}
	if (error == 1 || error == 2)
		write(1, "Error1_2\n", 9);
	else if (cont != 31)
		write(1, "Error5\n", 7);
	return (error);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "Error.\0", 7);
	else if (!validate_input_string(argv[1]))
		rush_01(argv[1]);
}
