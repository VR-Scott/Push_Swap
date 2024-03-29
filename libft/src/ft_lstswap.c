/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:48:56 by vscott            #+#    #+#             */
/*   Updated: 2019/07/07 13:05:50 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list **alst)
{
	t_list *tmp;

	if (*alst && (*alst)->next)
	{
		tmp = (*alst)->next;
		(*alst)->next = ((*alst)->next)->next;
		tmp->next = *alst;
		*alst = tmp;
	}
}
