/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:01:06 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/10 18:06:27 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcopy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	menor(char aux)
{
	char	hexa[6];
	char	ini[10];
	int		rest;
	int		cociente;

	ft_strcopy(hexa, "abcdef");
	ft_strcopy(ini, "0123456789");
	rest = (aux % 16);
	cociente = (aux / 16);
	write(1, "\\", 1);
	write(1, "0", 1);
	if (cociente < 10 && cociente > 1)
		write(1, &ini[cociente], 1);
	if (rest < 10)
		write(1, &ini[rest], 1);
	else
		write(1, &hexa[rest % 10], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
			menor(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
