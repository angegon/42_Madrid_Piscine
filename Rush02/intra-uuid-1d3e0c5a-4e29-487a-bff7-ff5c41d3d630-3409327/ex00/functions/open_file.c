/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agracia- <agracia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:40:26 by agracia-          #+#    #+#             */
/*   Updated: 2020/12/13 18:14:47 by agracia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		open_file(char *buff, char *path, int size)
{
	int		succes;
	int		file_descriptor;

	succes = 0;
	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor > 0)
	{
		read(file_descriptor, buff, size);
		close(file_descriptor);
		succes = 1;
	}
	return (succes);
}
