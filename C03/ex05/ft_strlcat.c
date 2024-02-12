/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 03:03:01 by sojo              #+#    #+#             */
/*   Updated: 2023/08/02 03:10:29 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < (size - i - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main()
{
	char	s1[100] = "My function ";
	char	s3[100] = "Original function ";
	char	s2[] = "Join this to the first string";
	ft_strlcat(s1,s2,100);
	//strlcat(s3,s2,100);
	printf("%s\n", s1);
	printf("%s\n", s3);
}
*/