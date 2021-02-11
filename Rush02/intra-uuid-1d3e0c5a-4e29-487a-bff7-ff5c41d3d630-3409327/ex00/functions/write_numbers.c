/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 21:33:10 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 22:05:40 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/structs.h"
#include "../headers/functions.h"

char	*create_char_zeros(char nbr, int zeros)
{
	char	*aux;
	int		i;

	i = 1;
	aux = (char*)malloc(zeros + 1);
	aux[0] = nbr;
	while (i < zeros)
	{
		aux[i] = '0';
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

char	*create_char_20(char *a, char *b)
{
	char	*aux;
	int		i;

	i = 1;
	aux = (char*)malloc(3);
	aux[0] = a[0];
	aux[1] = b[0];
	aux[2] = '\0';
	return (aux);
}

void	write10(t_key_value *dict, char *nbr, int size_list)
{
	ft_get_value(dict, create_char_zeros(nbr[0], 2), size_list);
	ft_get_value(dict, &nbr[1], size_list);
}

void	write100(t_key_value *dict, char *nbr, int size_list)
{
	char *veinte;

	ft_get_value(dict, create_char_zeros(nbr[0], 1), size_list);
	ft_get_value(dict, create_char_zeros('1', 3), size_list);
	veinte = create_char_20(create_char_zeros(nbr[1], 1),
		create_char_zeros(nbr[2], 1));
	if (ft_atoi(veinte) <= 20 && ft_atoi(veinte) > 0)
		ft_get_value(dict, veinte, size_list);
	else
	{
		ft_get_value(dict, create_char_zeros(nbr[1], 2), size_list);
		if (nbr[2] != '0')
			ft_get_value(dict, &nbr[2], size_list);
	}
}

void	write1000(t_key_value *dict, char *nbr, int size_list)
{
	char *veinte;

	ft_get_value(dict, create_char_zeros(nbr[0], 1), size_list);
	ft_get_value(dict, create_char_zeros('1', 4), size_list);
	ft_get_value(dict, create_char_zeros(nbr[1], 1), size_list);
	ft_get_value(dict, create_char_zeros('1', 3), size_list);
	veinte = create_char_20(create_char_zeros(nbr[2], 1),
		create_char_zeros(nbr[3], 1));
	if (ft_atoi(veinte) <= 20 && ft_atoi(veinte) > 0)
		ft_get_value(dict, veinte, size_list);
	else
	{
		ft_get_value(dict, create_char_zeros(nbr[2], 2), size_list);
		if (nbr[2] != '0')
			ft_get_value(dict, &nbr[3], size_list);
	}
}
