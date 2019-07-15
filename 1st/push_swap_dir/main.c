#include "../libft/libft.h"

int	main(void)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		ft_putendl(line);
	}
	return (0);
}
