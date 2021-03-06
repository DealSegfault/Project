/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparigi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:30:35 by mparigi           #+#    #+#             */
/*   Updated: 2016/11/26 17:29:31 by mparigi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fillit.h"

int			check_file(int fd)
{
	char	c;
	int		i;
	int		line;
	int		nbr_tet;

	nbr_tet = 0;
	line = 0;
	while (c)
	{
		i = 0;
		while (i < 4)
		{
			if (read(fd, &c, 1) == -1)
				return (msg_error());
			i++;
		}
		if (read(fd, &c, 1) == -1 || c != '\n')
			return (msg_error());
		line++;
		if (line == 4)
		{
			nbr_tet++;
			line = 0;
			if (read(fd, &c, 1) == -1)
				return (msg_error());
			if (c == EOF)
				return (nbr_tet);
			if (c == '\n')
			{
				if (read(fd, &c, 1) == -1)
					return (msg_error());
			}
		}
	}
	return (nbr_tet);
}

t_tetri		*get_tetri(char *src)
{
	int			fd;
	t_tetri		*tetri;

	if ((fd = open(src, O_RDONLY)) == -1 || check_file(fd) == ERR)
		return (tet_error());
}

int			main(int argc, char **argv)
{
	t_tetri		**list;

	if (argc != 2)
		return (usg_error());
	if (get_tetri(argv[1]) == NULL)
		return (0);

	return (0);
}
