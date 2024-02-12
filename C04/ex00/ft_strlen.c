/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 03:12:37 by sojo              #+#    #+#             */
/*   Updated: 2023/08/02 03:15:08 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
		count ++;
	return (count);
}
/*
#include <stdio.h>

int 	main(void)
{
	printf("%d", ft_strlen("hello"));
}
*/