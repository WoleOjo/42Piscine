/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibanacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 05:43:48 by sojo              #+#    #+#             */
/*   Updated: 2023/08/06 19:22:58 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(-10));
}
*/
