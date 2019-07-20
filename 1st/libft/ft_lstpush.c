/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:32:19 by vscott            #+#    #+#             */
/*   Updated: 2019/07/07 15:46:18 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **frm, t_list **to)
{
	t_list *tmp;

	if (*frm)
	{
		tmp = *frm;
		*frm = (*frm)->next;
		tmp->next = *to;
		*to = tmp;
	}
}