/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:38:47 by sojo              #+#    #+#             */
/*   Updated: 2023/08/02 01:43:31 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	s1[100] = "My function ";
	char	s3[100] = "Original function ";
	char	s2[] = "Join this to the first string";
	ft_strcat(s1,s2);
	strcat(s3,s2);
	printf("%s\n", s1);
	printf("%s\n", s3);
}
*/