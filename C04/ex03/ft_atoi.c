/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 04:38:04 by sojo              #+#    #+#             */
/*   Updated: 2023/08/02 04:48:25 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (*(str + i) == ' ' || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	while (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '+')
			i++;
		if (*(str + i) == '-')
		{
			sign *= -1;
			i++;
		}
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		result = result * 10 + (*(str + i) - '0');
		i++;
	}
	return (sign * result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%d\n", ft_atoi("  126787abc"));
	printf("%d\n", atoi("   126787abc"));
}
*/
