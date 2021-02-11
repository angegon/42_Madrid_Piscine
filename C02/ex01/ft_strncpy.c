/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:22:38 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/10 11:53:25 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int i)
{
	unsigned int aux;

	aux = 0;
	while (src[aux] != '\0' && aux < i)
	{
		dest[aux] = src[aux];
		aux++;
	}
	while (aux < i)
	{
		dest[aux] = '\0';
		aux++;
	}
	return (dest);
}
