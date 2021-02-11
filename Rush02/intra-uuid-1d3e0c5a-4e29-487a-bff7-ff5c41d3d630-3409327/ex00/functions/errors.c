/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 19:50:00 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 22:32:29 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.h"

int		check_error(int argc, char **argv)
{
	char	*nbr_aux;
	int		var_comp;
	int		error;

	var_comp = 1;
	error = 0;
	if (!(argc >= 2 && argc <= 3))
	{
		error = 1;
		return (error);
	}
	if (argc == 3)
		var_comp = 2;
	nbr_aux = ft_trim(argv[var_comp]);
	if (atoi(nbr_aux) < 0)
	{
		error = 1;
		return (error);
	}
	return (error);
}
