/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 07:45:06 by vscott            #+#    #+#             */
/*   Updated: 2019/07/07 17:24:17 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

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
//		ft_putendl("lst");
		ft_putendl("ins:");
		ins = ft_getins();
		ft_putnlst(heada);
		ft_putendl("lst:");
		ft_putslst(ins);
		ft_lstswap(&heada);
		ft_putendl("after swap:");
		ft_putnlst(heada);
		ft_lstrot(&heada);
		ft_putendl("after rot:");
		ft_putnlst(heada);
		ft_lstrrot(&heada);
		ft_putendl("after rrot:");
		ft_putnlst(heada);
		ft_lstpush(&heada, &headb);
		ft_putendl("heada pushb:");
		ft_putnlst(heada);
		ft_putendl("headb pushb:");
		ft_putnlst(headb);

	}
	return (0);
}
