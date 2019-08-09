/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_help.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:50:39 by vscott            #+#    #+#             */
/*   Updated: 2019/07/20 16:30:22 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_max(int *stack, int size)
{
	int	i;
	int	max;
	int	m;

	if (size == 0)
		return (-1);
	i = 0;
	m = 0;
	max = stack[i];
	while (i < size)
	{
		if (max < stack[i])
		{
			max = stack[i];
			m = i;
		}
		i++;
	}
	return (m);
}

int		find_min(int *stack, int size)
{
	int	i;
	int	min;
	int	m;

	if (size == 0)
		return (-1);
	i = 0;
	m = 0;
	min = stack[i];
	while (i < size)
	{
		if (min > stack[i])
		{
			min = stack[i];
			m = i;
		}
		i++;
	}
	return (m);
}

void	min_first(t_stacks *stacks)
{
	int	min;

	min = find_min(stacks->stack_a, stacks->a_size);
	if (min <= stacks->a_size / 2)
		while (min--)
			apply_ra(stacks);
	else
		while ((stacks->a_size - min++) > 0)
			apply_rra(stacks);
}
