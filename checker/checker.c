/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 07:45:06 by vscott            #+#    #+#             */
/*   Updated: 2019/07/02 10:48:17 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_putendl2d(char **str2d);

static void	make_stack(char *str)
{
	char **split;

	split = ft_strsplit(str, ' ');
	ft_putendl2d(split);
}
int			main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putendl(av[1]);
		make_stack(av[1]);
	}
	return (0);
}
