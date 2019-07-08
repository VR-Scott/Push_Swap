/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:25:05 by vscott            #+#    #+#             */
/*   Updated: 2019/07/07 16:03:10 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnlst(t_list *lst)
{
	while (lst)
	{
		ft_putnbr(*((int*)(lst->content)));
		ft_putchar('\n');
		lst = lst->next;
	}
}