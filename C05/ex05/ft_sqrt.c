/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:53:49 by sojo              #+#    #+#             */
/*   Updated: 2023/08/08 14:16:56 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	square;
	long	high;
	long	low;
	long	mid;

	low = 1;
	high = nb / 2;
	while (low <= high)
	{
		mid = (low + high) / 2;
		square = mid * mid;
		if (square == nb)
			return ((int)mid);
		else if (square < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(9000000));
}
*/
