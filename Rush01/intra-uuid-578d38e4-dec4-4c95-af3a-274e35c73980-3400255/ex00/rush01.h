/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 20:22:32 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/06 22:37:09 by cpiniell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stdlib.h>
# include <unistd.h>

int		**ft_border(char *argv);
void	ft_putfourone(int **tab);
void	ft_putonefour(int **tab);
void	ft_putfourwhenone(int **tab);
int		ft_putthree_two(int **tab);
void	ft_restfour(int **tab);
void	ft_three_two(int **tab);
void	ft_print_arr(int **tab);
int		ft_validate_input_string(char *argv);
int		ft_invalid_heads(int **tab);
int		ft_putthree_rows(int **tab);
void	ft_two_three(int **tab);
void	ft_sumcolumns(int **tab);
void	ft_sumrows(int **tab);
void	ft_othersthree(int **tab);
void	ft_conditionsone(int **tab);
void	ft_conditionstwo(int **tab);
void	ft_othersthree(int **tab);
void	ft_sumcolumns(int **tab);
void	ft_sumrows(int **tab);

#endif
