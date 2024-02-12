/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 05:29:28 by sojo              #+#    #+#             */
/*   Updated: 2023/08/08 14:10:31 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		result = 0;
	else if (nb == 0 && power == 0)
		result = 1;
	else if (power == 0)
		result = 1;
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(-7,8));
}
*/
