/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_key_value.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 18:40:20 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 22:13:45 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/structs.h"
#include "../headers/functions.h"
#include <stdio.h>
#include <unistd.h>

void	clear(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
}

void	ft_create_key_value(t_key_value *dict, char *str)
{
	int		i;
	int		b;
	int		count_dict;
	char	*buffer;

	i = 0;
	b = 0;
	count_dict = 0;
	buffer = (char*)malloc(255);
	while (str[i] != '\0')
	{
		if (str[i] == ':' || str[i] == '\n')
		{
			buffer[i] = '\0';
			b = 0;
			if (str[i] == ':')
				ft_strcpy(dict[count_dict].key, ft_trim(buffer));
			if (str[i] == '\n')
				ft_strcpy(dict[count_dict++].value, ft_trim(buffer));
			clear(buffer);
			i++;
			continue;
		}
		buffer[b++] = str[i++];
	}
}
