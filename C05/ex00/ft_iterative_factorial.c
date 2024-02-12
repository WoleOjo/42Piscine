/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 04:51:19 by sojo              #+#    #+#             */
/*   Updated: 2023/08/06 19:18:17 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		result = 0;
	else if (nb == 0)
		result = 1;
	else if (nb == 1)
		result = 1;
	else
	{
		result = 1;
		while (nb >= 1)
		{
			result *= nb;
			nb --;
		}
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(-5));
}
*/
