/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:51:04 by sojo              #+#    #+#             */
/*   Updated: 2023/08/07 16:12:51 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	j;

	if (ac > 1)
	{
		j = 1;
		while (j < ac)
		{
			ft_putchar(av[ac - 1]);
			write(1, "\n", 1);
			ac--;
		}
	}
}
