/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:45:47 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/14 22:09:23 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int contneg;
	int result;

	i = 0;
	contneg = 0;
	result = 0;
	while ((str[i] != '\0') && (str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	while ((str[i] != '\0') && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			contneg++;
		i++;
	}
	if (contneg % 2 != 0)
		contneg = -1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		write(1, &str[i], 1);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (conteng * result);
}
