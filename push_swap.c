/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:52:13 by vscott            #+#    #+#             */
/*   Updated: 2019/07/16 12:31:09 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stacks	*stacks;
	int			i;

	i = 0;
	if (ac > 1)
		{
			stacks = (t_stacks*)malloc(sizeof(t_stacks));
			make_stacks(stacks, av[1]); // May need to return stack.
			while (i < stacks->a_size)
			{
				ft_putnbr(stacks->stack_a[i++]);
				ft_putchar('\n');
			}
			free_stacks(stacks);
		}
	return (0);
}
