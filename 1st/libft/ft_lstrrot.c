/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:01:14 by vscott            #+#    #+#             */
/*   Updated: 2019/07/07 15:46:48 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrrot(t_list **alst)
{
	t_list *tmp;
	t_list *lst;

	if (*alst && (*alst)->next)
	{
		tmp = (*alst);
		while ((tmp->next)->next)
			tmp = tmp->next;
		lst = tmp->next;
		tmp->next = NULL;
		lst->next = *alst;
		*alst = lst;
	}
}
