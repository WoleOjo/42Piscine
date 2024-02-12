/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:58:07 by sojo              #+#    #+#             */
/*   Updated: 2023/08/03 06:17:44 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int no)
{
	char	c;

	if (no == -2147483648)
	{
		ft_putnbr(no / 10);
		write(1, "8", 1);
	}
	else if (no < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-no);
	}
	else
	{
		if (no > 9)
		{
			ft_putnbr(no / 10);
		}
		c = 48 + no % 10;
		write(1, &c, 1);
	}
}

int	main(void)
{
	ft_putnbr(134898775);
}
