/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_ins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:44:19 by vscott            #+#    #+#             */
/*   Updated: 2019/07/19 15:59:33 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_sa(t_stacks *stacks)
{
	int	tmp;

	if (stacks->a_size < 2)
		return ;
	tmp = stacks->stack_a[0];
	stacks->stack_a[0] = stacks->stack_a[1];
	stacks->stack_a[1] = tmp;
	ft_putstr("sa\n");
}

void	apply_sb(t_stacks *stacks)
{
	int	tmp;

	if (stacks->b_size < 2)
		return ;
	tmp = stacks->stack_b[0];
	stacks->stack_b[0] = stacks->stack_b[1];
	stacks->stack_b[1] = tmp;
	ft_putstr("sb\n");
}

void	apply_ss(t_stacks *stacks)
{
	int	tmp;

	if (stacks->a_size > 1)
	{
		tmp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = tmp;
	}
	if (stacks->b_size > 1)
	{
		tmp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = tmp;
	}
	ft_putstr("ss\n");
}

void	apply_pa(t_stacks *stacks)
{
	int i;

	if (stacks->b_size == 0)
		return ;
	i = stacks->a_size;
	while (i--)
		stacks->stack_a[i + 1] = stacks->stack_a[i];
	stacks->stack_a[0] = stacks->stack_b[0];
	i = 0;
	while (i++ <= stacks->b_size)
		stacks->stack_b[i - 1] = stacks->stack_b[i];
	stacks->a_size++;
	stacks->b_size--;
	ft_putstr("pa\n");
}

void	apply_pb(t_stacks *stacks)
{
	int i;

	if (stacks->a_size == 0)
		return ;
	i = stacks->b_size;
	while (i--)
		stacks->stack_b[i + 1] = stacks->stack_b[i];
	stacks->stack_b[0] = stacks->stack_a[0];
	i = 0;
	while (i++ <= stacks->a_size - 1)
		stacks->stack_a[i - 1] = stacks->stack_a[i];
	stacks->b_size++;
	stacks->a_size--;
	ft_putstr("pb\n");
}
