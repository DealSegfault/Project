/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparigi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 16:14:05 by mparigi           #+#    #+#             */
/*   Updated: 2016/11/26 16:21:12 by mparigi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fillit.h"

void	*tet_error(void)
{
	ft_putendl("error");
	return (NULL);
}

char	msg_error(void)
{
	ft_putendl("error");
	return (ERR);
}

char	usg_error(void)
{
	ft_putendl("usage: ./fillit source_file");
	return (ERR);
}
