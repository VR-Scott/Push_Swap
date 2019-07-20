/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 09:27:04 by vscott            #+#    #+#             */
/*   Updated: 2019/07/20 15:51:46 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_a_rot(int len, int pos, char **rot)
{
	if (pos > len / 2)
	{
		*rot = ft_strcpy(*rot, "rra");
		if (len > 2)
			pos = len - pos;
	}
	else
		*rot = ft_strcpy(*rot, "ra");
	return (pos);
}

int	find_b_rot(int len, int pos, char **rot)
{
	if (pos > len / 2)
	{
		*rot = ft_strcpy(*rot, "rrb");
		if (len > 2)
			pos = len - pos;
	}
	else
		*rot = ft_strcpy(*rot, "rb");
	return (pos);
}
