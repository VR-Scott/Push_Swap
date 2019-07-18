/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:52:22 by vscott            #+#    #+#             */
/*   Updated: 2019/07/18 11:24:07 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3(t_stacks *stacks)
{
	int	max_i;
	if (stacks->a_size == 2)
	{
		apply_sa(stacks);
		return ;
	}
	max_i = find_max(stacks->stack_a, stacks->a_size);
	if (max_i == 0)
		apply_ra(stacks);
	if (max_i == 1)
		apply_rra(stacks);
	if (stacks->stack_a[0] > stacks->stack_a[1])
		apply_sa(stacks);
}

void		sort(t_stacks *stacks)
{
	if (is_sorted(stacks->stack_a, stacks->a_size) && stacks->b_size == 0)
		return ;
	if (stacks->a_size <= 3)
		return (sort_3(stacks));
	else
		large_sort(stacks);
}
