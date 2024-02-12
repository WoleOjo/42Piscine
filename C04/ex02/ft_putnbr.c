/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 04:22:27 by sojo              #+#    #+#             */
/*   Updated: 2023/08/02 04:36:58 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}
/*
int	main()
{
	int	n = -31123;
	int n2 = 0;
	int n3 = -2-3-1;
	ft_putnbr(n);
	write(1, "\n", 1);
	ft_putnbr(n2);
	write(1, "\n", 1);
	ft_putnbr(n3);
}
*/