/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 05:15:04 by sojo              #+#    #+#             */
/*   Updated: 2023/08/06 19:21:22 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	answer;

	if (power < 0)
		answer = 0;
	else if (nb == 0 && power == 0)
		answer = 1;
	else if (power == 0)
		answer = 1;
	else
	{
		answer = 1;
		while (power >= 1)
		{
			answer *= nb;
			power--;
		}
	}
	return (answer);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(-7,8));
}
*/