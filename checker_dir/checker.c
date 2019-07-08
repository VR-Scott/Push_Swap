/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 07:45:06 by vscott            #+#    #+#             */
/*   Updated: 2019/07/08 16:51:27 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ps.h"

static t_list	*ft_getins(void)
{
	char	*line;
	t_list	*ins;

	if (get_next_line(0, &line) > 0)
	{
		ins = ft_lstnew((void*)line, sizeof(char) * (ft_strlen(line) + 1));
		ft_strdel(&line);
		ins->next = ft_getins();
		return (ins);
	}
	return (NULL);
}

static t_list	*ft_makelst(char **sa)
{
	int		e;
	t_list	*elem;

	if (*sa)
	{
		e = (ft_atoi(*sa));
		elem = ft_lstnew((void*)&e, sizeof(int));
		elem->next = ft_makelst(++sa);
		return (elem);
	}
	return (NULL);
}

static t_list	*ft_makestack(char *str)
{
	char	**split;

	split = ft_strsplit(str, ' ');
	return (ft_makelst(split));
}

int				main(int ac, char **av)
{
	t_list	*lst;
	t_list	*ins;
	t_list	*heada;
	t_list	*headb;

	headb = NULL;

	if (ac > 1)
	{
//		ft_putendl(av[1]);
		lst = (ft_makestack(av[1]));
		heada = lst;
		ft_putendl("head a:");
		ft_putnlst(heada);
		ft_putendl("head b:");
		ft_putnlst(headb);
		ft_putendl("ins:");
		ins = ft_getins();
		ft_putslst(ins);
		ft_doins(&heada, &headb, ins);
		ft_putendl("heada after ins:");
		ft_putnlst(heada);
		ft_putendl("headb after ins:");
		ft_putnlst(headb);
		ft_check(&heada, &headb);
	}
	return (0);
}
