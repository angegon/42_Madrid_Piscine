/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 16:31:15 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 22:32:09 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"
#include "headers/structs.h"

void	imprimir_numero(t_key_value *dict, char *nbr, int sz_nbr, int size_list)
{
	int		i;
	int		size;
	char	*zeros;

	nbr = ft_trim(nbr);
	size = ft_strlen(nbr);
	if (ft_atoi(nbr) < 21)
		ft_get_value(dict, nbr, size_list);
	else if (size == 2)
		write10(dict, nbr, size_list);
	else if (size == 3)
		write100(dict, nbr, size_list);
	else if (size == 4)
		write1000(dict, nbr, size_list);
	ft_putstr("\n");
}

int		main(int argc, char **argv)
{
	const int	max_buffer = 4096;
	char		f_dic[max_buffer];
	t_key_value	*dictionary;
	char		*path;
	int			var_nbr;

	path = "./numbers.dict";
	var_nbr = 1;
	if (argc == 3)
	{
		var_nbr = 2;
		path = argv[1];
	}
	if (check_error(argc, argv) == 1 |
		open_file(f_dic, path, max_buffer) <= 0)
		ft_putstr("error");
	else
	{
		dictionary = (t_key_value*)malloc(sizeof(t_key_value) *
			(count_char(f_dic, '\n') + 1));
		ft_create_key_value(dictionary, f_dic);
		imprimir_numero(dictionary, argv[var_nbr],
			ft_strlen(argv[var_nbr]), (count_char(f_dic, '\n') + 1));
		free(dictionary);
	}
}
