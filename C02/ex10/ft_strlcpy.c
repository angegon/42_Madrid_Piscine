/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:27:01 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/10 14:02:27 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int aux;

	aux = 0;
	while (src[aux] && aux + 1 < size)
	{
		dest[aux] = src[aux];
		++aux;
	}
	dest[aux] = 0;
	while (src[aux])
		++aux;
	return (aux);
}
