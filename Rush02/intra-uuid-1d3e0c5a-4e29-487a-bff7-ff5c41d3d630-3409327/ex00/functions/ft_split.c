/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 18:46:45 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 18:15:13 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../headers/functions.h"
#include <sys/errno.h>

int		size_next(int inicio, char *str, char split, int strlen)
{
	int size;

	size = 0;
	while (str[inicio] != split && inicio < strlen)
	{
		size++;
		inicio++;
	}
	return (size);
}

char	**ft_split(char *str, char split)
{
	char	**lines;
	int		str_len;
	int		next_size;
	int		i;
	int		x;

	x = 0;
	i = 0;
	str_len = ft_strlen(str);
	lines = malloc(sizeof(char*) * count_char(str, split) + 1);
	while (i < str_len)
	{
		next_size = size_next(i, &str[i], split, str_len) + 1;
		lines[x] = (char*)malloc(next_size);
		ft_strncpy(lines[x], &str[i], next_size);
		x++;
		i += next_size;
	}
	return (lines);
}
