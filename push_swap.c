/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:52:13 by vscott            #+#    #+#             */
/*   Updated: 2019/07/20 16:06:47 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stacks(t_stacks *stacks)
{
	int		i;

	i = 0;
	ft_putendl("stack a :");
	while (i < stacks->a_size)
	{
		ft_putnbr(stacks->stack_a[i++]);
		ft_putchar('\n');
	}
	i = 0;
	ft_putendl("stack b :\n");
	while (i < stacks->b_size)
	{
		ft_putnbr(stacks->stack_b[i++]);
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	t_stacks	*stacks;
	int			i;

	i = 0;
	if (ac > 1)
	{
		stacks = (t_stacks*)malloc(sizeof(t_stacks));
		make_stacks(stacks, av[1]);
		sort(stacks);
		free_stacks(stacks);
	}
	return (0);
}
