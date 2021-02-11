/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpiniell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:52:34 by cpiniell          #+#    #+#             */
/*   Updated: 2020/12/06 22:34:54 by cpiniell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"


void	ft_put_numbers(char *argv)
{
	int **arr;
	
	arr = ft_border(argv);
	if (ft_invalid_heads(arr))
		write(1, "Error\n", 7);
	else
	{
		ft_putfourone(arr);
		ft_putonefour(arr);
		ft_putfourwhenone(arr);
		if ((ft_putthree_two(arr) == 0) && (ft_putthree_rows(arr) == 0))
			ft_restfour(arr);
		ft_three_two(arr);
		ft_two_three(arr);
		ft_sumcolumns(arr);
		ft_sumrows(arr);
		ft_othersthree(arr);
		ft_conditionsone(arr);
		ft_conditionstwo(arr);
		ft_othersthree(arr);
		ft_sumcolumns(arr);
		ft_sumrows(arr);
		ft_sumcolumns(arr);
		ft_sumrows(arr);
		ft_print_arr(arr);
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "Error\n", 7);
	else if (!ft_validate_input_string(argv[1]))
		ft_put_numbers(argv[1]);
	return (0);
}
