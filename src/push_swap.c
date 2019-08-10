/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:52:13 by vscott            #+#    #+#             */
/*   Updated: 2019/08/10 11:25:37 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_stacks	*stacks;

	if (ac > 1)
	{
		stacks = (t_stacks*)malloc(sizeof(t_stacks));
		make_stacks(stacks, av[1]);
		sort(stacks);
		del_stacks(&stacks);
	}
	return (0);
}
