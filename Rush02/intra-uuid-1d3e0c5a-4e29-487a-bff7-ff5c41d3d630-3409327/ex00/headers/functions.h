/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 18:44:48 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 22:25:14 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include "structs.h"
# include <stdlib.h>

int		count_char(char *str, char split);
int		open_file(char *buff, char *path, int size);
int		ft_strlen(char *str);
char	**ft_split(char *str, char split);
void	ft_create_key_value(t_key_value *dict, char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_atoi(const char *str);
char	*ft_trim(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		check_error(int argc, char **argv);
void	write10(t_key_value *dict, char *nbr, int size_list);
void	write100(t_key_value *dict, char *nbr, int size_list);
void	write1000(t_key_value *dict, char *nbr, int size_list);
void	ft_get_value(t_key_value *dictionary, char *key, int size);

#endif
