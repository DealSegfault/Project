/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparigi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:36:24 by mparigi           #+#    #+#             */
/*   Updated: 2016/11/23 22:54:58 by mparigi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
//# include <stdio.h>
//# include <fcntl.h>
# define OK 1
# define ERR 0
# define X_SIZE size % 4
# define Y_SIZE size / 4

typedef	struct	s_tetri
{
	int		size;
	char	**tetri;
}				t_tetri;

#endif
