/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparigi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:30:35 by mparigi           #+#    #+#             */
/*   Updated: 2016/11/23 22:49:13 by mparigi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fillit.h"

char		check_file(int fd)
{
	char	c;

	while (c)
	{
		if (read(fd, &c, 1) == -1)
		{
			ft_putendl("error");
			return (ERR);
		}
	
	}

}

t_tetri		*get_tetri(char *src)
{
	int			fd;
	t_tetri		*tetri;

	if ((fd = open(src, O_RDONLY)) == -1 || check_file(fd) == ERR)
	{
		ft_putendl("error");
		return (NULL);
	}
}

int			main(int argc, char **argv)
{
	t_tetri		*list;

	if (argc != 2)
	{
		ft_putendl("usage: fillit source_file");
		return (0);
	}
	if (get_tetri(argv[1]) == NULL)
		return (0);

	return (0);
}
