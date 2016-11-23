/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparigi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:55:36 by mparigi           #+#    #+#             */
/*   Updated: 2016/11/23 22:21:51 by mparigi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fillit.h"

int		size_min(int	nbr_tet)
{
	int		i;

	nbr_tet *= 4;
	i = 1;
	while (i * i < nbr_tet)
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putendl("apprend a use ton prog fdp");
		return (0);
	}
	ft_putnbr(size_min(ft_atoi(argv[1])));
}
