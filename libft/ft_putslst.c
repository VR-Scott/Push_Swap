/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putslst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:21:09 by vscott            #+#    #+#             */
/*   Updated: 2019/07/07 15:56:02 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putslst(t_list *lst)
{
	while (lst)
	{
		ft_putendl(lst->content);
		lst = lst->next;
	}
}