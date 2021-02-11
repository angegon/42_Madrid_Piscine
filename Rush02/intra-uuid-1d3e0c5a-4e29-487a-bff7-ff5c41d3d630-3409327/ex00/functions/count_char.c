/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:52:49 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 18:21:47 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_char(char *str, char character)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == character)
		{
			count++;
		}
		i++;
	}
	return (count);
}
