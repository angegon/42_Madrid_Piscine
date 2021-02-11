/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:05:02 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/10 18:46:57 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upper;

	i = 0;
	if (str[i] == '\0')
		return (str);
	else
	{
		upper = 1;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && !(str[i - 1] >= 'A'
				&& str[i - 1] <= 'Z') && !(str[i - 1] >= '0'
				&& str[i - 1] <= '9') && i > 0)
				upper = 1;
			if (upper == 1)
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			upper = 0;
			i++;
		}
	}
	return (str);
}
