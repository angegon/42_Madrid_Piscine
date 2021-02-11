/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:08:45 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/10 16:38:22 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int aux;
	int i;

	i = 0;
	aux = 1;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 65 && str[i] <= 90))
				aux = 0;
			i++;
		}
		return (aux);
	}
}
