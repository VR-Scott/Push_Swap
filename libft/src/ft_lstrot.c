/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 09:26:18 by vscott            #+#    #+#             */
/*   Updated: 2019/07/07 13:02:41 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrot(t_list **alst)
{
	t_list *tmp;
	t_list *head;

	if (*alst && (*alst)->next)
	{
		head = (*alst)->next;
		tmp = (*alst)->next;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = *alst;
		(*alst)->next = NULL;
		*alst = head;
	}
}
