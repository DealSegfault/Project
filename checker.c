/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhalit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:44:17 by mhalit            #+#    #+#             */
/*   Updated: 2016/11/28 20:08:09 by mhalit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fillit.h"
#include "include/libft.h"

// Verfie le formatage des block ./#/\n ?
int		line(char *block)
{
	int j;

	j = 0;
	while (block[j])
	{
		if (j % 4 == 0 && block[j] != '\n')
		{
			ft_putchar(block[j]);
			return (0);
		}
		else
			if (block[j] == '#' || block[j] == '.')
				j++;
			else 
				return (0);
	}
	ft_putstr("\nLINE\n");
	return (1);
}


//Verifie la structure du tetriminos.
int		colle(char *block)
{
	int i;
	int lnk;

	lnk = 0;
	i = 0;
	while (block[i])
	{
		if (block[i] == '#')
			lnk = pls(block, i);
		i++;
	}
	if (lnk >= 6 && lnk <= 8)
		return (1);
	else 
		return (0);
}

// Plus_less_suicide Verfie les cases aux alentours.
int		pls(char *block, int i)
{
	int max;
	int lnk;
	
	lnk = 0;
	max = ft_strlen(block);
	if (block[i + 1] == '#')
		lnk++;
	if (i > 0 && block[i - 1] == '#')
		lnk++;
	if (block[i + 1] == '#')
		lnk++;
	if (i < max - 5 && block[i + 5] == '#')
		lnk++;
	if (i > 5 && block[i - 5] == '#')
		lnk++;
	return (lnk);
}

