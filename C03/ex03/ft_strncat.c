/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:47:38 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/14 13:45:14 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				cont;
	unsigned int	j;

	j = 0;
	cont = 0;
	while (dest[cont] != '\0')
	{
		cont++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[cont] = src[j];
		cont++;
		j++;
	}
	dest[cont] = '\0';
	return (dest);
}
