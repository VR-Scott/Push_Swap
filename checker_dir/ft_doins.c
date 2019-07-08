/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:43:46 by vscott            #+#    #+#             */
/*   Updated: 2019/07/08 15:04:55 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static void	ft_swapins(t_list **heada, t_list **headb, t_list *ins)
{
	if (ft_strequ(ins->content, "sa"))
		ft_lstswap(heada);
	else if (ft_strequ(ins->content, "sb"))
		ft_lstswap(headb);
	else if (ft_strequ(ins->content, "ss"))
	{
		ft_lstswap(headb);
		ft_lstswap(heada);
	}
	else
	{
		ft_putendl_fd("Error", 2);
		exit (-1);
	}
}

static void	ft_rotins(t_list **heada, t_list **headb, t_list *ins)
{
	if (ft_strequ(ins->content, "ra"))
		ft_lstrot(heada);
	else if (ft_strequ(ins->content, "rb"))
		ft_lstrrot(headb);
	else if (ft_strequ(ins->content, "rr"))
	{
		ft_lstrrot(headb);
		ft_lstrrot(heada);
	}
	else if (ft_strequ(ins->content, "rra"))
		ft_lstrrot(heada);
	else if (ft_strequ(ins->content, "rrb"))
		ft_lstrot(headb);
	else if (ft_strequ(ins->content, "rrr"))
	{
		ft_lstrrot(headb);
		ft_lstrrot(heada);
	}
	else
	{
		ft_putendl_fd("Error", 2);
		exit (-1);
	}
}

static void	ft_pushins(t_list **heada, t_list **headb, t_list *ins)
{
	if (ft_strequ(ins->content, "pa"))
		ft_lstpush(headb, heada);
	else if (ft_strequ(ins->content, "pb"))
		ft_lstpush(heada, headb);
	else
	{
		ft_putendl_fd("Error", 2);
		exit (-1);
	}
}

void		ft_doins(t_list **heada, t_list **headb, t_list *ins)
{
	while (ins)
	{
		if (*((char*)ins->content) == 's')
			ft_swapins(heada, headb, ins);
		else if (*((char*)ins->content) == 'p')
			ft_pushins(heada, headb, ins);
		else if (*((char*)ins->content) == 'r')
			ft_rotins(heada, headb, ins);
		else
		{
			ft_putendl_fd("Error", 2);
			exit (-1);
		}
		ins = ins->next;
	}
}
