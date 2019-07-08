/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:40:00 by vscott            #+#    #+#             */
/*   Updated: 2019/07/08 16:55:30 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ps.h"

void	ft_check(t_list **heada, t_list **headb)
{
	if (!*headb)
	{
		while (*heada && (*heada)->next)
		{
			if (*(int*)((*heada)->content) > *(int*)(((*heada)->next)->content))
			{
				ft_putendl("KO");
				exit (0);
			}
			*heada = (*heada)->next;
		}
		ft_putendl("OK");
	}
	else
	{
		ft_putendl("KO");
		exit (0);
	}
}
