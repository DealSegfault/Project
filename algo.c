/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparigi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:55:36 by mparigi           #+#    #+#             */
/*   Updated: 2016/11/26 16:17:22 by mparigi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fillit.h"

void	pos_init(int fd, int pos[4])
{

}

int		size_min(int	nbr_tet)
{
	int		i;

	nbr_tet *= 4;
	i = 1;
	while (i * i < nbr_tet)
		i++;
	return (i);
}
