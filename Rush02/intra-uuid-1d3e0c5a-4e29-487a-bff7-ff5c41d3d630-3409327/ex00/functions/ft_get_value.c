/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 22:02:25 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 22:02:48 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/structs.h"
#include "../headers/functions.h"

void	ft_get_value(t_key_value *dictionary, char *key, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(key, dictionary[i].key) == 0)
		{
			ft_putstr(dictionary[i].value);
			ft_putstr(" ");
			break ;
		}
		i++;
	}
}
