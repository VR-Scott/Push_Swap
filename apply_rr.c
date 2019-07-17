/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:39:03 by vscott            #+#    #+#             */
/*   Updated: 2019/07/17 16:10:04 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_ra(t_stacks *stacks)
{
	int i;
	int tmp;

	if (stacks->a_size < 2)
		return ;
	i = 1;
	tmp = stacks->stack_a[0];
	while (i < stacks->a_size)
	{
		stacks->stack_a[i - 1] = stacks->stack_a[i];
		i++;
	}
	stacks->stack_a[i - 1] = tmp;
	ft_putstr("ra\n");
}

void	apply_rb(t_stacks *stacks)
{
	int i;
	int tmp;

	if (stacks->b_size < 2)
		return ;
	i = 1;
	tmp = stacks->stack_b[0];
	while (i < stacks->b_size)
	{
		stacks->stack_b[i - 1] = stacks->stack_b[i];
		i++;
	}
	stacks->stack_b[i - 1] = tmp;
	ft_putstr("rb\n");
}

void	apply_rr(t_stacks *stacks)
{
	int i;
	int tmp;

	if (stacks->a_size > 1)
	{
		i = 1;
		tmp = stacks->stack_a[0];
		while (i < stacks->a_size)
		{
			stacks->stack_a[i - 1] = stacks->stack_a[i];
			i++;
		}
		stacks->stack_a[i - 1] = tmp;
	}
	if (stacks->b_size > 1)
	{
		i = 1;
		tmp = stacks->stack_b[0];
		while (i < stacks->b_size)
		{
			stacks->stack_b[i - 1] = stacks->stack_b[i];
			i++;
		}
		stacks->stack_b[i - 1] = tmp;
	}
	ft_putstr("rr\n");
}
