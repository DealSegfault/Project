/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparigi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:36:24 by mparigi           #+#    #+#             */
/*   Updated: 2016/11/26 16:30:30 by mparigi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
# define OK 1
# define ERR 0
# define X pos[i] % 4
# define Y pos[i] / 4
# define X_SIZE size % 4
# define Y_SIZE size / 4

typedef	struct	s_tetri
{
	int		size;
	int		pos[4];
}				t_tetri;

char	msg_error(void);
char	usg_error(void);
void	*tet_error(void);

#endif
