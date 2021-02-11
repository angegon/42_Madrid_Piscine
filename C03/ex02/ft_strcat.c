/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:09:14 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/14 13:32:22 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int cont;
	int j;

	j = 0;
	cont = 0;
	while (dest[cont] != '\0')
	{
		cont++;
	}
	while (src[j] != '\0')
	{
		dest[cont] = src[j];
		cont++;
		j++;
	}
	dest[cont] = '\0';
	return (dest);
}
