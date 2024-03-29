/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putslst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:21:09 by vscott            #+#    #+#             */
/*   Updated: 2019/07/08 12:40:09 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putslst(t_list *lst)
{
	if (!lst)
		ft_putendl("(null)");
	while (lst)
	{
		ft_putendl(lst->content);
		lst = lst->next;
	}
}
