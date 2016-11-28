/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparigi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:30:35 by mparigi           #+#    #+#             */
/*   Updated: 2016/11/28 20:03:33 by mhalit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/fillit.h"

int		read_file(int fd)
{
	char b[20 + 1];
	t_tetri *out;
	int i;

	i = 0;
	if(!(out = malloc(sizeof(t_tetri))))
		return (0);
	while ((i = read(fd, b, 20)))
	{
		b[i] = '\0';
		ft_putnbr(i);
		if (i != 20 || !line(b) || !colle(b))
			return (0);
		ft_putstr(b);
		i = read(fd, b, 1);
		if (i != '\n')
			return (0);
		ft_putstr(b);
	}
	return (1);
}

int		open_file(char *src)
{
	int fd;

	fd = open(src, O_DIRECTORY);
	if (fd >= 0)
		return (0);
	fd = open(src, O_RDONLY);
	if (fd < 0)
		return (0);
	return (fd);
}

t_tetri		*get_tetri(char *src)
{
	int			fd;
	int			i;
	t_tetri		*tetri;

	i = 0;
	if (!(tetri = malloc(sizeof(t_tetri))))
		return (NULL);
	if (!(fd = open_file(src)))
		return (NULL);
	//if (!check_file(read_file(fd)))
	read_file(fd);
	return (tetri);
}

int			main(int argc, char **argv)
{
	t_tetri		**list;

	if (argc != 2)
		return (usg_error());
	if (!get_tetri(argv[1]))
		ft_putendl("error");
	return (0);
}
