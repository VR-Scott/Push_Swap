/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:58:02 by vscott            #+#    #+#             */
/*   Updated: 2019/07/22 17:34:37 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_rra(t_stacks *stacks)
{
	int i;
	int tmp;

	if (stacks->a_size < 2)
		return ;
	i = stacks->a_size - 1;
	tmp = stacks->stack_a[i];
	while (i > 0)
	{
		stacks->stack_a[i] = stacks->stack_a[i - 1];
		i--;
	}
	stacks->stack_a[0] = tmp;
	ft_putstr("rra\n");
}

void	apply_rrb(t_stacks *stacks)
{
	int i;
	int tmp;

	if (stacks->b_size < 2)
		return ;
	i = stacks->b_size - 1;
	tmp = stacks->stack_b[i];
	while (i > 0)
	{
		stacks->stack_b[i] = stacks->stack_b[i - 1];
		i--;
	}
	stacks->stack_b[0] = tmp;
	ft_putstr("rrb\n");
}

void	apply_rrr(t_stacks *stacks)
{
	int i;
	int tmp;

	if (stacks->a_size > 1)
	{
		i = stacks->a_size - 1;
		tmp = stacks->stack_a[i];
		while (i-- > 0)
		{
			stacks->stack_a[i + 1] = stacks->stack_a[i];
		}
		stacks->stack_a[0] = tmp;
	}
	if (stacks->b_size > 1)
	{
		i = stacks->b_size - 1;
		tmp = stacks->stack_b[i];
		while (i > 0)
		{
			stacks->stack_b[i] = stacks->stack_b[i - 1];
			i--;
		}
		stacks->stack_b[0] = tmp;
	}
	ft_putstr("rrr\n");
}
