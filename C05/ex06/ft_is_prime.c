/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 06:13:46 by sojo              #+#    #+#             */
/*   Updated: 2023/08/08 14:19:23 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	n = 5;
	while (n * n <= nb)
	{
		if (nb % n == 0)
			return (0);
		n += 6;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(11));

}
*/
