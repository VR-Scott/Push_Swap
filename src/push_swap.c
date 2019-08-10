/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:52:13 by vscott            #+#    #+#             */
/*   Updated: 2019/08/10 14:58:07 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int ac, char **av)
{
	t_stacks	*stacks;

	if (ac > 1)
	{
		stacks = (t_stacks*)malloc(sizeof(t_stacks));
		check_av(stacks, av, ac);
		sort(stacks);
		del_stacks(&stacks);
	}
	return (0);
}
