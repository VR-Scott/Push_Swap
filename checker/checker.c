/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 07:45:06 by vscott            #+#    #+#             */
/*   Updated: 2019/07/04 09:07:58 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void    ft_swap(t_list **alst);

static t_list	*ft_getins()
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
	//ft_putendl_2d(split);
	return (ft_makelst(split));
}

static void		ft_putslst(t_list *lst)
{
	while (lst)
	{
		ft_putendl(lst->content);
		lst = lst->next;
	}
}

static void		ft_putnlst(t_list *lst)
{
	while (lst)
	{
		ft_putnbr(*((int*)(lst->content)));
		ft_putchar('\n');
		lst = lst->next;
	}
}

int				main(int ac, char **av)
{
	t_list	*lst;
	t_list	*ins;
	t_list	**heada;

	if (ac > 1)
	{
//		ft_putendl(av[1]);
		lst = (ft_makestack(av[1]));
		heada = &lst;
//		ft_putendl("lst");
		ins = ft_getins();
		ft_putnlst(*heada);
		ft_putslst(ins);
		ft_swap(heada);
		ft_putnlst(*heada);
	}
	return (0);
}
