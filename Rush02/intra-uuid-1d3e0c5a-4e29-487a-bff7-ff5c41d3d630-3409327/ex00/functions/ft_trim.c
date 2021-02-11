/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 22:26:58 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 19:36:50 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../headers/functions.h"

int		count_spaces(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == ' ')
	{
		i++;
		count++;
	}
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == '\t' || str[i] == ' ')
	{
		i--;
		count++;
	}
	return (count);
}

char	*ft_trim(char *str)
{
	int		size;
	char	*new_str;
	int		i;
	int		n;

	i = 0;
	n = 0;
	size = ft_strlen(str) - count_spaces(str);
	new_str = (char*)malloc(sizeof(char) * size + 1);
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (n < size)
	{
		new_str[n] = str[i];
		i++;
		n++;
	}
	new_str[n] = '\0';
	return (new_str);
}
